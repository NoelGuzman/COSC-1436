//Lab#7
//Noel Guzman

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
	char YoN = 'Y';

	do
	{
		//Variables
		int employID, depend;
		double Hours, Pay, FinalPay, Overtimehours;
		double PayRate = 16.78;
		double Overtime = (PayRate*1.5);
		const double SSTax=.06, FedTax=.14, StateTax=.05;

		//Input
		cout << "Please enter Employee ID (SSN-numbers only): \n";
		cin >> employID;
		cout << "Enter number of Dependents: \n";
		cin >> depend;
		cout << "Enter number of hours worked in a week: \n";
		cin >> Hours;

		//Calculations
		if(Hours>40)
		{
			Overtimehours= Hours-40;
		}

		else
		{
			Overtimehours=0;
		}

		if(Hours<=40)
		{
			Pay=Hours*PayRate;
		}
		else
		{
			Pay=(40*PayRate)+((Hours-40)*Overtime);
		}

		double WithheldTaxSS= SSTax*Pay;
		double WithheldTaxFed= FedTax*Pay;
		double WithheldTaxState= StateTax*Pay;

		if(depend>=3)
		{
			FinalPay= Pay-(WithheldTaxFed+WithheldTaxSS+WithheldTaxState+10+35);
		}
		else
		{
			FinalPay= Pay-(WithheldTaxFed+WithheldTaxSS+WithheldTaxState+10);
		}

		//Output
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "Employee Number: "
		 << employID
		 << "\nHours worked: "
		 << Hours
		 << "\nOvertime hours worked: "
		 << Overtimehours
		 << "\nWith overtime preimum: 1.5\n"
		 << "Gross pay: $"
		 << Pay
		 << "\nFICA Tax witheld: $"
		 << WithheldTaxSS
		 << "\nFederal Income Tax witheld: $"
		 << WithheldTaxFed
		 << "\nState Tax witheld: $"
		 << WithheldTaxState
		 << "\nHealth Insurance Premium witheld: $";
		 if(depend<3)
		 {
			 cout << "0.00 \n";
		 }
		 else
		 {
			 cout << "35.00 \n";
		 }
		 cout.setf(ios::fixed);
		 cout.setf(ios::showpoint);
		 cout.precision(2);
		 cout << "Flabbergaster's Union dues withheld: $10.00 \n"
			<< "Net Pay: $"
			<< FinalPay
			<< "\n"
			<< "\n Do you wish to run this again? (Y or N): ";
		 cin >> YoN;

	}while(YoN =='Y' || YoN=='y');

	return 0;
}