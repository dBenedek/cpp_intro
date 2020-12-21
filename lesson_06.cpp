/*
 * lesson_06.cpp
 *  Functions, operators
 *  Created on: 2020. dec. 21.
 *      Author: dbenedek
 */


// Function example 01


#include <iostream>
using namespace std;

/*
int add_nums (int a, int b)
{
	int r;                  // new variable

	r = a+b;

	return (r);
}


int main()
{
	int z;

	z = add_nums(5,4);

	cout << "The sum is: " << z << endl;
	return 0;
}
*/

// Function example 02

/*
float multiply (float a, float b)
{
	float r;
	r = a*b;
	return(r);
}

int main()
{
	float z = 1;
	for (int n=1; n < 10; n++)
	{
		z = multiply(z, 2);
	}
	cout << "10^2 = " << z << endl;
	return 0;
}
*/


// Operators

/*
void print_something()
{
	cout << "I am an operator.\n";
}

int main()
{
	print_something();
	return 0;
}
*/


// Giving parameters by value

/*
void double_it (int& a, int& b, int& c)    // this way the parameter values can be modified
{
	a*= 2;                                 // double it
	b*= 2;
	c*= 2;
}

int main()
{
	int x=1, y=3, z=7;
	double_it(x,y,z);          // call the function --> new values assigned

	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	return 0;
}
*/


// Numbers before, after

/*
void num_before_after(int number, int& after, int& before)
{
	after = number+1;
	before = number-1;
}

int main()
{
	int x=10,y,z;                             // only x has value yet
	cout << "The number is: " << x << endl;
	num_before_after(x, y, z);                // y and z don't have values before calling the function!
	cout << "Next number: " << y << ", previous number: " << z << endl;
	return 0;
}
*/


// Default parameters

/*
int multiply (int a, int b=2)
{
	int r;
	r=a*b;
	return(r);
}

int main()
{
	cout << multiply(12) << endl;
	cout << multiply(20, 4) << endl;
	return(0);
}
*/


// Multiple names

/*
int operate(int a, int b)
{
	return(a*b);
}

float operate(float a, float b)
{
	return(a/b);
}

int main()
{
	int x=5, y=2;
	float n=5.0, m=2.0;

	cout << operate(x,y) << endl; // the same function names, but the compiler knows which one to use!

	cout << operate(n,m) << endl;

	return 0;
}
*/


// Recursive function

/*
long factor(long a)
{
	if (a > 1)
	return (a* factor(a-1));      // call the same function recursively
	else
		return(1);
}

int main()
{
	long number;

	cout << "Enter a number: ";
	cin >> number;
	cout << number << "! = " << factor(number) << endl;

	return 0;
}
*/


// Declare function protoype

/*
void even (int a);
void odd (int a);


int main()
{
	int i;
	do {
		cout << "Give me a number (press 0 to quit): ";
		cin >> i;
		even(i);
	} while (i!=0);
		return 0;
}


void odd (int a)
{

  if ((a%2)!=0) cout << "Odd number.\n";

  else even (a);

}


void even (int a)

{

  if ((a%2)==0 & a != 0) {
	  cout << "Even number.\n";
  } else if (a == 0) {
	  cout << "The number is 0.\n";
  } else {odd (a);}
}
*/


// Exercises

#include <iostream>
#include <math.h>

using namespace std;


double discr (double a1, double b1, double c1)
{
	double dr;

	dr = (b1*b1) - (4*a1*c1);

	return dr;
}

int main()
{
	double a,b,c,d,d1,x1,x2;

	cout << "\n.......Quadratic equation solver.......\n\n";
	cout << "Formula: ax^2+bx+c=0\n";
	cout << "Please specify the value a: ";
	cin >> a;
	cout << "Please specify the value b: ";
	cin >> b;
	cout << "Please specify the value c: ";
	cin >> c;

	d = discr(a,b,c);

	cout << "\n The discriminant's value: " << d;

	if (d<0)
	{
		cout << "\nNegative value under the square root sign. No result!\n";
	}
	else
	{
		d1 = sqrt(d);
		cout << "\n Square root: " << d1;

		if (a!=0)
		{
			x1 = (-b+d1)/(2*a);
			cout << "\n x1 = " << x1;
			x2 = (-b-d1)/(2*a);
			cout << "\n x2 = " << x2 << endl;
		}
		else
		{
			cout << "\n This is not a quadratic equation.\n";
		}
		return 0;
	}
}
