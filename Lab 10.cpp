//Noel Guzman
//Lab#10
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void get_input(fstream& in_file, ofstream& out_file);
// Get entry file and output file out and ready for calculations.


void calculate(fstream& in_file, ofstream& out_file);
//Calculates and makes changes to the outfile.

int main()
{
	fstream in_file;
	ofstream out_file;

	get_input(in_file, out_file);
	calculate(in_file, out_file);
	cout << "Averages have been calculated.\n";
	system("Pause");
	return 0;
}

void get_input(fstream& in_file, ofstream& out_file)
{
	string inputFile, outputFile;
	
	in_file.open("C:\\ABCIn.txt");
	
	if(in_file.fail())
	{
		cout << "Error!\n";
	}

	out_file.open("C:\\ABCOut.txt");

	if(out_file.fail())
	{
		cout << "Error!\n";
	}
}

void calculate(fstream& in_file, ofstream& out_file)
{
	double sum, a[10];
	int i;
string first_name,last_name;
double avg;
in_file>>first_name;
while(in_file)

{sum=0.0;
in_file>>last_name;
for(i=0;i<10;i++)
{in_file>>a[i];
sum+=a[i];
}

out_file<<first_name<<" "<<last_name<<" ";
for(i=0;i<10
	;i++)
out_file<<a[i]<<" ";
avg=sum/10.0;
out_file<<avg<<endl;
in_file>>first_name;
}
}