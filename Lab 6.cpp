//Lab #6
//Noel Guzman & Jose Jara

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double MPH, Min, Sec, Minpace, MPHinver;

	//Input
	cout << "Enter Desired miles per hour: \n";
	cin >> MPH;

	//Calculations
	MPHinver = 1/MPH;
	Minpace = 60*MPHinver;
	Sec = (Minpace- static_cast<int>(Minpace))*60;

	//Output
	cout << "your pace is " << static_cast<int>(Minpace) << " minutes and " << Sec << " seconds. \n";

system ("Pause");
	return 0;
}
 
//Lab #6
//Noel Guzman & Jose Jara

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	char con = 'y';
	do{
		double Dollar, Num, Shares, Denom, SharVal;

		//Input
		cout << "Enter the number of shares: \n";
		cin >> Shares;
		cout << "Enter the whole dollar amount per share: \n";
		cin >> Dollar;
		cout << "Enter the fraction portion with numerator first: \n";
		cin >> Num >> Denom;
	
		//Calculations
		SharVal = Shares *(Dollar + (Num/Denom));

		//Output
		cout << Shares << " shares of stock with a market price of " << Dollar << " " << Num << "/" << Denom;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << " has a value of $" << SharVal << "\n";
		cout << "do you want to repeat this?";
		cin >> con;
	}while(con == 'y'|| con == 'Y');

	

	system ("Pause");
	return 0;
}