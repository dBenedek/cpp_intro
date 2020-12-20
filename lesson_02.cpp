/*
 * lesson_02.cpp
 *  Basic operations
 *  Created on: 2020. dec. 20.
 *      Author: dbenedek
 */

#include <iostream>

using namespace std;


void something()
{
	double d = 2.2222;
	int i = 7;
	d += i;
	i *= d;
	cout << d << endl;
	cout << i << endl;
}


int main()
{
	double a;
	cout << "Please specify the variable a: \n";
	cin >> a;
	cout << "Increase " << a << " with one.\n";
	a++;
	cout << "And then decrease the new value with 2.\n";
	a -= 2;
	cout << "The new value is: " << a << endl;
	something();
	return 0;
}
