/*
 * lesson_03.cpp
 *  Branching
 *  Created on: 2020. dec. 20.
 *      Author: dbenedek
 */


#include <iostream>

using namespace std;


bool yes_or_no()
{
	cout << "Did you understand? (y/n)\n";
	char answer = 0;
	cin >> answer;
	if (answer == 'y') return true;
	else return false;
}


int main()
{
	int number;
	cout << "This is a loop.\n";
	cout << "Specify a number:\n";
	cin >> number;
	if (number < 10) cout << "Lower than 10.\n";
	else cout << "Not lower than 10.\n";
	if (yes_or_no()) cout << "Great!\n";
	else cout << "Then try it again.\n";
}


/*
int main()
{
	int number;
	cout << "Multiple loops.\n";
	cout << "Give one of these numbers: 1, 2, 3, 4, 5\n";

	cin >> number;

	switch (number)
	{
	case 1: cout << "This is the worse.\n"; break;
	case 2: cout << "A bit better.\n"; break;
	case 3: cout << "Average.\n"; break;
	case 4: cout << "Good.\n"; break;
	case 5: cout << "Excellent!\n"; break;
	default: cout << "You specified a wrong value.\n";
	}

	cout << "\n";
}


void change(int &x, int &y)
{
	int my_var;
	my_var = x;
	x = y;
	y = my_var;
}

int main()
{
	int a,b;
	cout << "Please, specify the value a: \n";
	cin >> a;
	cout << "Please, specify the value b: \n";
	cin >> b;
	if (b>a) change(a,b);
	cout << "In decreasing order: \n";
	cout << "a = " << a << " > b = " << b << endl;
}
*/
