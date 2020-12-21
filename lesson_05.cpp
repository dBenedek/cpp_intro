/*
 * lesson_05.cpp
 *  Arrays, pointers
 *  Created on: 2020. dec. 20.
 *      Author: dbenedek
 */


// Arrays


#include <iostream>
using namespace std;
#define SPACE " "


/*
int main()
{
	cout << "Printing a matrix...\n";
	int my_matrix [5][5];

	for (int xindex = 0; xindex<6; xindex++)
	{
		for (int yindex=1; yindex<6; yindex++)
		{
			my_matrix[xindex][yindex] = xindex*yindex;
			cout << xindex << "x" << yindex << "=";
			if (my_matrix[xindex][yindex]<10) cout << SPACE;
			cout << my_matrix[xindex][yindex] << SPACE;
		}
		cout << endl;
	}

	cout << endl;
}
*/

/*
void print_array (int arg[], int length) // arguments: an array, and its length
{
	for (int n=0; n<length; n++)
		cout << arg[n] << " ";           // print the nth element of the array with space
	cout << "\n";
}


int main()
{
	int my_array1[] = {5,10,15};
	int my_array2[] = {2,4,6,8,10};
	print_array(my_array1, 3);
	print_array(my_array2, 5);
	return 0;
}
*/


// Pointers

/*
int main()
{
	int andy, fred;
	int * ted;

	andy = 25;
	fred = andy;
	ted = &andy;          // memory location! (symbol &)

	cout << andy << endl;
	cout << fred << endl;
	cout << ted << endl;

	return 0;
}
*/

// More pointers

/*
int main()
{
	int firstvalue = 5, secondvalue = 15;
	int * p1, * p2;                       // pointers

	p1 = &firstvalue;                     // label1
	p2 = &secondvalue;                    // label2

	cout << "p1 value: " << p1 << endl;
	cout << "p2 value: " << p2 << endl;

	*p1 = 10;                             // give value to the pointer p1
	*p2 = *p1;

	p1 = p2;
	*p1 = 20;                             // give value to the pointer p2

	cout << "First value: " << firstvalue << endl;
	cout << "Second value: " << secondvalue << endl;

	return 0;
}
*/


int main()
{
	int numbers[5];       // an array (no values declared yet)
	int * p;              // a pointer

	p = numbers;
	cout << p << endl;
	*p = 10;

	p++;
	cout << p << endl;
	*p = 20;

	p = &numbers[2];
	*p = 30;
	cout << p << endl;

	p = numbers + 3;
	*p = 40;
	cout << p << endl;

	p = numbers;
	*(p+4) = 50;
	cout << p << endl;

	for (int n=0; n<5; n++)
		cout << numbers[n] << ", ";
    cout << endl;

	return 0;
}
