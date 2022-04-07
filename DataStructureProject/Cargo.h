#pragma once
#include"UI.h"
#include"Time.h"

class Cargo
{
protected:
	Time Pre_Time;
	int Load_Time;
	Time Move_Time;
	Time Waiting_Time;
	Time Delivery_Time;
	Time deliveryTime_PhaseOne;
	Type t;
	int ID;
	int Cost;
	int Distance;
	int priority;
	bool autoP = false;
public:
	Cargo(Time pt, int lt,int ID,Type t, int c, int d);
	void set_Load_Time(int t);
	void set_Cost(int c);
	void set_Distance(int d);
	void set_Type(Type t);
	void set_Pre_Time(Time t);
	void set_Move_Time(Time t);
	void set_Waiting_Time();
	void set_Delivery_Time(int speed);
	void set_ID(int id);
	void setDTPhaseOne(Time DT);
	void setAutoP(bool ap);

	int get_Load_Time();
	int get_Cost();
	int get_Distance();
	int getPriority();
	int get_ID();
	bool getAutoP();
	Time get_Delivery_Time();
	Time get_Pre_Time();
	Type get_Type();
	Time get_Move_Time();
	Time get_Waiting_Time();
	Time getDTPhaseOne();

	void LoadFromStreamFile();
	void OutToStreamFile();

};

