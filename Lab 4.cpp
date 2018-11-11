//Lab #4
//Noel Guzman
// 2/22/2016

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
//variables
	string Gender = "";
	double Weight, age, height, feet, inches, BMR, Bar;

	//Questions
	cout << "Are you Male or Female? (Enter Male or Female) \n";
	cin >> Gender;
	cout << "Enter your height in feet and inches: \n";
	cin >> feet >> inches;
	cout << "Enter your age:\n";
	cin >> age;
	cout << "Enter Your weight in pounds: \n";
	cin >> Weight;

	//Calculations
	height = (feet * 12) + inches;
	if(Gender== "Male")
	{
		BMR= 66 + (6.3 * Weight) + (12.9 * height) - (46.8 * age);
	}
	else
	{
		BMR= 655 + (4.3 * Weight) + (4.7 * height) - (4.7 * age);
	}

	Bar = BMR/230;
	
	//Output
	cout << "You would need to eat " << Bar << " candy bars to maintain your weight. \n";

		system ("Pause");
	return 0;
}