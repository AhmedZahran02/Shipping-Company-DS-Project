#include "StepbystepMode.h"

void StepbystepMode::Simulate(Company* c1, Time& t)
{
	bool done = 0;
	Time counter(0, 0);
	bool shipping = false;
	while (!done) {

		done = c1->Execute_Events(t);
		c1->AutoPromote(Normal, t);

		if (t.get_Hour() >= 5 && t.get_Hour() <= 23) {
			c1->MaxWait(Normal, t);
			c1->MaxWait(special, t);
			c1->MaxWait(VIP, t);
			c1->Load(t);
		}
		c1->LoadAtNight(t);
		c1->Truck_Loading_Moving(t);
		c1->Deliver_MovingCargo(VIP, t);
		c1->Deliver_MovingCargo(special, t);
		c1->Deliver_MovingCargo(Normal, t);
		c1->MoveTrucksToCheckup(t);
		c1->MoveCheckupToAvail(t);

		done &= c1->noCargosLeft();
		c1->PrintToConsole(t);
		t++;
		Sleep(1000);
	}
}
