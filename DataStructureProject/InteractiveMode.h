#pragma once
#include"Company.h"
#include"Time.h"
#include <Windows.h>

class InteractiveMode
{
public:
    static void Simulate(Company* c1, Time& t, UI* uiObject);
};

