
#include <iostream>
#include <stdio.h>

using namespace std;
double ClockAngle(double hour, double minute)
{

	//reference here is against 12 o clock
	double min_angle = 	(360 * minute)/60;
	double hr_angle = (360 * (hour%12))/12;

	double angle = (hr_angle - min_angle) % 360;

	return angle;
}


int main()
{
	
	cout<<"Ths angle when time is 3pm is:" << ClockAngle(3,60) << endl;

	return 0;
}