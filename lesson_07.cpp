/*
 * lesson_07.cpp
 *  Application of arrays
 *  Created on: 2020. dec. 22.
 *      Author: dbenedek
 */


#include <iostream>
#include <cstdlib>
using namespace std;
# define SEPARATOR " ------- "


/*
int main()
{
	string kiraly[5] = {"Szent Istvan",
			"Orseolo Peter",
			"Aba Samuel",
			"Orseolo Peter",
			"I. Andras"};

	int uralk[6][1];
	int yrs[6];

	uralk[0][0] = 1000;
	uralk[0][1] = 1038;
	uralk[1][0] = 1038;
	uralk[1][1] = 1041;
	uralk[2][0] = 1041;
	uralk[2][1] = 1044;
	uralk[3][0] = 1044;
	uralk[3][1] = 1046;
	uralk[4][0] = 1046;
	uralk[4][1] = 1060;

	system("cls");
	cout << "Our first 5 kings\n\n";

	int max;
	int longest = 0;

	for (int i=0;i<5;i++)
	{
		yrs[i] = uralk[i][1] - uralk[i][0];
		if (yrs[i] > longest) {
			max = i;
			longest = yrs[i];
		}
		cout << kiraly[i] << SEPARATOR;
		cout << uralk[i][0] << " - " << uralk[i][1] << "\n";
		cout << SEPARATOR << "Years: " << uralk[i][1] - uralk[i][0] << " years\n\n";
	}

	cout << "\n\n King with the most years on throne: " << kiraly[max];
	cout << "\n Years on throne: " << longest << endl;

	return 0;
}
*/


// Arrays with characters


int main()
{
	char question[] = "Please, provide your name: ";
	char welcome[] = "Hello, ";
	string name;

	cout << question;
	getline(cin, name);       // more names can be provided this way
	system("clear");
	cout << welcome << name << "!\n\n";
	return 0;
}



