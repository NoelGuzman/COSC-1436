//Lab #8
//Noel Guzman 

#include "stdafx.h"
#include <iostream>

using namespace std;

void get_input(double& Feet, double& inch);
//recieves input of feet and inches to use for calculations.

double length(const double Feet , const double inch, double &wholemeter, double &centi);
//calculates the length in meters and centimeters

void give_output(const double Feet , const double inch, double wholemeter, double centi);
//gives out the final answer.

int main()
{
	double Feet, inch, wholemeter, centi;
	char ans = 'Y';
	do
	{
	get_input(Feet, inch);
	length(Feet, inch, wholemeter, centi);
	give_output(Feet, inch, wholemeter, centi);
	cout << "Would you like to calculate it again? (Y or N):";
	cin >> ans;
	system ("Pause");
	}while( ans =='Y' || ans == 'y');

	return 0;
}

void get_input(double& Feet, double& inch)
{
	cout << "Please enter an integer for feet:\n";
	cin >> Feet;
	cout << "Please enter your inches:\n";
	cin >> inch;
}

double length(const double Feet , const double inch, double &wholemeter, double &centi)
{
	double meter;

	meter = Feet*.3048;
	wholemeter = static_cast<int>(meter);

	centi = (meter - wholemeter)*100 + (inch*2.54);

	return wholemeter, centi;
}
void give_output(const double Feet , const double inch, double wholemeter, double centi)
{
	cout << "Original length in feet and inches was: "
		<< Feet
		<< "ft and "
		<< inch
		<< "in.\n";
	cout << "The length in meters and centimeters is "
		<< wholemeter
		<< " m and "
		<< static_cast<int>(centi)
		<<" cm.\n";
}