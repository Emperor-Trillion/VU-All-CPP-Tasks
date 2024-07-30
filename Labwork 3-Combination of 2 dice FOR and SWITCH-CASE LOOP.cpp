#include <iostream>
using namespace std;
														//This program lists all combination on a die and calculates percentage of sums greater than 6
int main()												//This program does this, using the FOR and the Switch-case loop only
{
	int Total; double HigherSums; double Percentage; int LowestOutcome = 1; int HighestOutcome = 6;	//Declaration of variables that would be used,
	Total = HigherSums = Percentage = 0;															//Making percentage and Higher sum able to print decimal
	cout << "All Combinations for two dice are; " << endl;
	for (int die1 = 1; die1 <= 6; die1++)
	{
		for (int die2 = 1; die2 <= 6; die2++)
		{
			switch (die1)												//Switchcase for 1 on first die
			{
			case 1:
				switch (die2)											//Lists 1 from die 1 and other numbers from die 2
				{
				case 1:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 2:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 3:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 4:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 5:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				default:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				} break;
			case 2:														//second case for die 1, which lists 2 on first die and other numbers on second die
				switch (die2)
				{
				case 1:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 2:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 3:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 4:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 5:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				default:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				} break;
			case 3:														//third case for die 1, which lists 3 on first die and other numbers on second die
				switch (die2)
				{
				case 1:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 2:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 3:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 4:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 5:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				default:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				} break;
			case 4:														//fourth case for die 1, which lists 4 on first die and other numbers on second die
				switch (die2)
				{
				case 1:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 2:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 3:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 4:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 5:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				default:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				}break;
			case 5:														//fifth case for die 1, which lists 5 on first die and other numbers on second die
				switch (die2)
				{
				case 1:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 2:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 3:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 4:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 5:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				default:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				}break;
			default:														//sixth case for die 1, which lists 6 on first die and other numbers on second die
				switch (die2)
				{
				case 1:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 2:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 3:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 4:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				case 5:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				default:
					cout << "[" << die1 << "," << die2 << "]" << endl;
					break;
				}break;
			}
			if ((die1 + die2) > 6)										//tests for sum of numbers greater than 6
			{
				HigherSums = HigherSums + 1;							//records 1 for each sum greater than 6
			}
			Total = Total + 1;											//records for all listing of number done
		}
	}
	Percentage = (HigherSums / Total) * 100;							//uses the available figures to calculate percentage of sums greater than 6
	cout << endl << "Combination of Numbers Greater than 6 = " << Percentage << "%" << endl;
	cout << endl << "Smallest Combination is: [" << LowestOutcome << "," << LowestOutcome << "] and Largest Combination is: [" << HighestOutcome << "," << HighestOutcome << "]" << endl;
}