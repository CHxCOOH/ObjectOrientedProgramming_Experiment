#include <iostream>
using namespace std;
#include "Time.h"

int& Time::setHour(int hh) {
	hour = (hh >= 0 && hh < 24) ? hh : 0;
}

Time::Time() {
	hour = minute = second = 0;
}

Time::Time(int hh, int mm, int ss) {
	setTime(hh, mm, ss);
}

void Time::setTime(int hh, int mm, int ss) {
	hour = hh, minute = mm, second = ss;
}

// void Time::printUniversal

Time clock(11, 22, 43);
Time* clockPtr = &clock;

int main()	{
	clockPtr->printUniversal();
	clockPtr->second;
}