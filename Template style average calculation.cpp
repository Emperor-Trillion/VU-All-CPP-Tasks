#include <iostream>
using namespace std;

template <class T>
void MinMax(T type)							//Void Type Template that accepts input type
{
	T CalcAver;								// CalcAverage means Calculate Average, takes the type of the input
	int i = 0;
	T userInput, Min = 0, Max = 0, S = 0;	//userInput is entered by user, aand 'S' is the sum of all user inputs
	cout << "Enter the 5 Numbers to calculate their Average" << endl;
	while (i < 5)							// i iterates from 0 to 4, so that the program can accept 5 inputs 
	{
		cin >> userInput;
		if (i == 0) Min = userInput;		//if user inputs is the first, then the minimum is the user input value at the start
		if (userInput < Min)
		{
			Min = userInput;
		}
		else
		{
			if (userInput > Max) 
				Max = userInput;
		}
		S += userInput;
		i++;
	}
	CalcAver = (S / 5);
	cout << "Maximum: " << Max << endl;
	cout << "Minimum: " << Min << endl;
	cout << "Average: " << CalcAver << endl;
}
int main()
{
	char userInput;
	cout << "Enter \"F\" FLOAT or any other Letter for INTEGER TYPE" << endl;	//Asks user  to enter letter to determine type
	cin >> userInput;
	if (userInput == 'F' || userInput == 'f')									//Accepts 'F or f' as float type and calls the function
	{																			//using the template of float type, so accepts float numbers
		MinMax(1.5);
	}
	else
	{
		MinMax(1);
	}
	return 0;
}