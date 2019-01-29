// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main()
{
	string title;
	string author;

	int pubyear;
	int totalpages;
	cout << "What is the book title? \n";
	getline(cin, title);
	cout << "Who is the author? \n";
	getline(cin, author);
	cout << "What year was the book published? \n";
	cin >> pubyear;
	cout << "What is the total amount of pages? \n";
	cin >> totalpages;

	int currentyear = 2019;
	int age = (currentyear - pubyear);
	cout << "The book is " << age << " year(s) old.";

	if (age < 10) {
		cout << " The book is under 10 year(s) old. \n";
	}
	else {
		cout << " The book is at least 10 years old. \n";
	}
	if (totalpages < 100) {
		cout << "This is a pretty short book! \n";
	}
	else if (totalpages > 100 && totalpages < 300) {
		cout << "This book is an average-sized book. \n";
	}
	else {
		cout << "What a long book! \n";
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
