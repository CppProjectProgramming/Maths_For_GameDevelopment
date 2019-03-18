// MathsForGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
// @MazenMorgan
// You can learn these concepts on youtube: https://www.youtube.com/playlist?list=PLW3Zl3wyJwWOpdhYedlD-yCB7WQoHf-My 
// Maths For Game Developers !

#include "pch.h"
#include <iostream>
#include "Vector.h"


using namespace std;

int main()
{
	Vector v(3, 4);
	cout << v.Length() << endl;

	Vector doubled = v * 2;
	cout << doubled.Length() << endl;

	Vector halfed = v / 2;
	cout << halfed.Length() << endl;

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
