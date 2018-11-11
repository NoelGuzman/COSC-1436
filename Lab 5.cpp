//Noel Guzman & Daniel Gonzalez
//Bouyancy Lab#5

#include "stdafx.h"
#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	double weight, r, Fb;
	//Input
	cout << "Enter the weight in pounds: \n";
	cin >> weight;
	cout << "Enter the radius in feet: \n";
	cin >> r;
	
	//must be after so r is initialized
	double const PI = 3.14159265359;
	double const Vol = ((4/3)*PI*(pow(r, 3)));
	double const Fluid_Weight = 62.4;
	
	//Calculations
	Fb = Vol*Fluid_Weight;
	
	if(Fb < weight)
	{
		cout << "The object will float. \n";
	}
	else
	{
		cout << "The object will sink. \n";
	}
	
	system ("Pause");

	return 0;
}