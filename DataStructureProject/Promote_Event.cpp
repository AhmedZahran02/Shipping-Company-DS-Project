#include "Promote_Event.h"
Promote_Event::Promote_Event(Time T, int id, int extra): Event(T,id){
	set_Extra_Money(extra);
}
void Promote_Event::Execute(Company* myComp)
{
	Cargo* myCargo = myComp->Remove_Normal_Wating_Cargo(Event::Cargo_ID);
	myCargo->set_Type(VIP);
	myComp->addToVIPWaiting(myCargo);
}

void Promote_Event::set_Extra_Money(int extra) {
	Extra_Money = extra;
}

int Promote_Event::get_Extra_Money() {
	return Extra_Money;
}