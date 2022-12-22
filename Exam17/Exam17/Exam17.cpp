// Exam17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;
//
int StepenChisla(int x,int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
		result *= x;

	return result;
}
void main()
{
	setlocale(0, ".1251");
	int x,a;
	cout << "Enter numbers x and a: ";
	cin >> x >> a;
	if (x > 0 && a>0)
	{
		int pow_value_x = StepenChisla(x, a);
		
		cout << " Number equals x : " << pow_value_x << endl;

		int pow_value_y = StepenChisla(a, x);
		cout << " Number equals a : " << pow_value_y << endl;
	}
	else
		cout << "Non-natural number entered ";
	system("pause>>void");

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
