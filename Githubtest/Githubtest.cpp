// Githubtest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>


int main()
{
	std::vector<int> A1;
	int a1 = 0;
	std::vector<int> A2;
	int a2 = 0;
	std::vector<int> A3;
	int a3 = 0;
	std::vector<int> B1;
	int b1 = 0;
	std::vector<int> B2;
	int b2 = 0;
	std::vector<int> B3;
	int b3 = 0;
	std::vector<int> C1;
	int c1 = 0;
	std::vector<int> C2;
	int c2 = 0;
	std::vector<int> C3;
	int c3 = 0;

	for (int i = 0; i <= 10; i++)
	{
		A1.push_back(a1);
		a1 = a1 + 1;
		A2.push_back(a2);
		a2 = a2 + 2;
		A3.push_back(a3);
		a3 = a3 + 3;

		B1.push_back(b1);
		b1 = b1 + 4;
		B2.push_back(b2);
		b2 = b2 + 5;
		B3.push_back(b3);
		b3 = b3 + 6;

		C1.push_back(c1);
		c1 = c1 + 7;
		C2.push_back(c2);
		c2 = c2 + 8;
		C3.push_back(c3);
		c3 = c3 + 9;
	}
	std::cout << "Hello World!\n";
	std::cout << "\nVector A1: ";
	for (auto it = A1.begin(); it != A1.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << "\nVector A1: ";
	for (auto it = A2.begin(); it != A2.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << "\nVector A1: ";
	for (auto it = A3.begin(); it != A3.end(); it++) {
		std::cout << *it << " ";
	}
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
