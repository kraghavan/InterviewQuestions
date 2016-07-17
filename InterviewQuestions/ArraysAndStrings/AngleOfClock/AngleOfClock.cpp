
#include <iostream>
#include <stdio.h>
#include <algorithm>    // std::min
#include <cmath>

using namespace std;

double ClockAngle(double hour, double minute)
{

	if (hour < 0 || minute < 0 || hour > 12 || minute > 60)
	{
		cout << "Wrong input" << endl;
		exit(0);
	} 

	//reference here is against 12 o clock
	double hr_angle = 	0.5 * (hour * 60 + minute);
	double min_angle = 6*minute;
	double a = hr_angle-min_angle;
	a=abs(a);
	double angle = std::min(a,360-a);

	return angle;
}

/*
double calcAngle(double h, double m)
{
    // validate the input
    if (h <0 || m < 0 || h >12 || m > 60)
        printf("Wrong input");
 
    if (h == 12) h = 0;
    if (m == 60) m = 0;
 
    // Calculate the angles moved by hour and minute hands
    // with reference to 12:00
    float hour_angle = 0.5 * (h*60 + m);
    float minute_angle = 6*m;
 
    // Find the difference between two angles

    float d = hour_angle - minute_angle;
    double angle = abs(d);
 
    // Return the smaller angle of two possible angles
    angle = min(360-angle, angle);
 
    return angle;
}
*/
int main()
{
	
	cout<<"Ths angle when time is 3pm is:" << ClockAngle(3,60) << endl;
	return 0;
}