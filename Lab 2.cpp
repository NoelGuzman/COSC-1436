// Lab #2
//Noel Guzman & Ramiro Castillo

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Professor_name, Your_name, food, fever, adj, color, animal;

		cout << " Please input professor's first or last name: \n";
		cin >> Professor_name;
		cout << "\n Please input Your name: \n";
		cin >> Your_name;
		cout << "\n Please input an number between 100-120: \n";
		cin >> fever;
		cout << "\n Please enter an adjective: \n";
		cin >> adj;
		cout << "\n Please enter a color: \n";
		cin >> color;
		cout << "\n Please enter an animal: \n";
		cin >> animal;
		cout << "\n Please enter a food item: \n";
		cin >> food;

		cout << "\n Dear Instructor " << Professor_name << ",\n" << "\n";
		cout << "I am sorry I am unable to turn in my homework at this time. First I ate a rotten " << food << ", which made me turn " << color;
		cout << " and extremely ill. I came down with a fever of   " << fever << ". Next, my " << adj << " pet " << animal << " must have ";
		cout << "smelled the remains of the " << food << " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late." << endl;
		cout << "\n Sincerely, \n";
		cout << "\n " << Your_name << endl << endl;

			system ("Pause");

	return 0;
}