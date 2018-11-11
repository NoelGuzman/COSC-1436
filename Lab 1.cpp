//Distance in Freefall
//Noel Guzman & Daniel Gonzalez
//COSC 1136 - Lab

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
	int seconds, distance;

	cout << "Enter time in seconds. \n ";
	cin >> seconds; //input by user

	distance = (32/2)*(seconds)*(seconds); // Formula for freefall
	cout << "Distance traveled in freefall is ";
	cout <<	distance; //final product
	cout << " feet per second. \n";

	system("pause");

	return 0;
}
