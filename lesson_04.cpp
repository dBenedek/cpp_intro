/*
 * lesson_04.cpp
 *  Loops
 *  Created on: 2020. dec. 20.
 *      Author: dbenedek
 */

#include <iostream>
using namespace std;


/*
int main()
{
	int number =1;
	int sum = 0;
	int until;

	cout << "This is a while loop.\nEnter a number: \n";
	cin >> until;

	while (number < until+1)
	{
		sum += (number*number);
		number ++;
	}
	cout << "\nSum is: " << sum << endl;
	return 0;
}
*/


/*
int main()
{
	int number = 1;
	int sum = 0;
	int until;

	cout << "This is a while-do loop.\nSpecify a number: \n";
	cin >> until;

	until = (until*2) + 1;

	do
	{
		if (number%2 != 0) cout << number << endl;
		number ++;
		sum += number;
	}

	while (number < until+1);
		cout << "\nSum is: " << sum << endl;
}
*/


#define plus " + "
#define equal " = "
#define mxm 1000 // upper limit


int main()
{
	int until;
	cout << "This is a for loop.\nGive a positive integer number: \n";

	bool restart=false;

	do
	{
		if (restart) cout << "Wrong number specified!\nGive an other number:\n";
		restart = true;
		cin >> until;
	}

	while ((until < 0) or (until > mxm)); // if not true, then jump to the "do" part
	int sum = 0;
	for (int number=1; number < until+1; number++) // for loop
	{
		sum += number;
		cout << number;

		if (number < until) cout << plus;
		else cout << equal;
	}
	cout << sum << endl;
}
