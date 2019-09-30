

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string in()  //  function for inputting 
{
	string input;
	cin >> input;
	return input;
}

void out(string to_print)  //declare function prototypes so "out" statement works
{
	cout << to_print;
}


void nl()
{
	cout << endl;  //endline
}



int main()
{
	int age;
	float celsius, current_temp;
	//float to_celsius = (current_temp * 0.5555) - 32;
	out("Enter your age: ");
	age = stoi(in());

	out("In 10 years you will be:" + to_string(age + 10));
	nl();

	out("Enter the current temperature in degrees Fahrenheit: ");
	current_temp = stof(in());

	celsius = 5 * (current_temp - 32) / 9;

	out("The current temperature converted to celsius is: " + to_string(celsius));
	nl();

}

