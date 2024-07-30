#include<iostream>
#include <stdexcept>
using namespace std;

void IntType(int a);
int main()
{
	int input;

reRun:
	cout << "Enter any number to determine if it is ODD or EVEN. Press Zero \"0\" to stop program" << endl;
	cin >> input;

	if (input != 0) {
		goto reRun;
	}
	else{

		IntType(input);
	}

	return 0;
}
void IntType(int a)
{
	if (a % 2 == 0)
	{
		cout << a << " is an even number" << endl;
	}
	else
	{
		cout << a << " is an odd number" << endl;
	}
}

/** 
#include<iostream>
#include <stdexcept>
using namespace std;

void IntType(int a);

int main()
{
	int input;
	do
	{
		cout << "Enter any number to determine if it is ODD or EVEN. Press Zero \"0\" to stop program" << endl;
		cin >> input;
		IntType(input);
	} while (input != 0);
	return 0;
}
void IntType(int a)
{
	if (a % 2 == 0)
	{
		cout << a << " is an even number";
	}
	else
	{
		cout << a << " is an odd number";
	}
}
**/