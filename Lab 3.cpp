
//Noel Guzman
//Lab 3 Pay Increase
//2/15/2016

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	const double PIncrease = .076;
	double Csalary, Retropay, monthlyS, newSalary;
	
	//Input
	cout << "Enter current salary: \n";
	cin >> Csalary;

	//Processing
	newSalary = (Csalary * PIncrease) + Csalary;
	monthlyS = newSalary / 12;
	Retropay = (monthlyS - (Csalary /12)) * 6;

	//Output
	cout << "\n Your new salary is $" << newSalary << "\n ";
	cout << "Your monthly salary is $" << monthlyS << "\n ";
	cout << "Your Retroactive pay is $" << Retropay << "\n ";
		
	system ("pause");

	return 0;
}