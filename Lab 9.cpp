//Noel Guzman
//Lab#9

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;


int main()
{
	fstream inputNum;
	string inputFile;
	
	cout << " Please enter the file name (17 Characters or less): ";
	cin >> inputFile;
	inputNum.open(inputFile);
	
	if(inputNum.is_open())
	{
		double sum=0;
		double next;
		int count=0;
		inputNum >> next;
		while (inputNum)
		{
        sum = sum + next;
        count++;
        inputNum >> next;
		} 
		cout << (sum/count) << "\n";   

	}
	else
	{
		cout << "Error! \n";
	}
	system ("Pause");
	return 0;
}