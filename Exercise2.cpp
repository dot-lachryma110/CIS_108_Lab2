#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string in()  //function for inputs
{
	string input;
	cin >> input;
	return input;

}


void out(string to_print) // declare function prototypes so "out" statement works
{
	cout << to_print;
}

void nl()
{
	cout << endl;  //for new lines
}


int main()
{
	string title, author;
	int year_of_book, page_count, age;
	constexpr int current_year = 2019;
	age = (current_year - year_of_book);

	out("What is the title of the book? ");
	title = in();
	nl();

	out("Who is the author of the book? ");
	author = in();
	nl();

	out("What year was the book published? ");
	year_of_book = stoi(in());
	nl();

	out("How many pages is the book? ");
	page_count = stoi(in());
	nl();

	out("The book " + title + " was written by " + author +" in the year of " + to_string(year_of_book) + ".");
	nl();

	out("It is " + to_string(page_count) + " pages long and is officially " + to_string(current_year - year_of_book) + " years old.");
	nl();

	if (age > 2009)
		out("This book is younger than 10 years.");
	else
		out("This book is at least 10 years old.");
	nl();

	if (page_count < 100)
		out("This book is a short book.");
	else if (page_count >= 100 && page_count <= 300)
		out("This book is an average book.");
	else
		out("This book is a long book.");
	nl();

}







