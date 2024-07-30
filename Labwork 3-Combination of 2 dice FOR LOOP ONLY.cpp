#include <iostream>
using namespace std;
													//This program lists all combination on a die and calculates percentage of sums greater than 6
int main()											//This program does this, using the FOR loop only
{
	int Total; double HigherSums; double Percentage; int LowestOutcome = 1; int HighestOutcome = 6; //Declaration of variables that would be used,
	Total = HigherSums = Percentage = 0;						//Making percentage and Higher sum able to print decimal
	cout << "All Combinations for two dice are; " << endl;
	for (int die1 = 1; die1 <= 6; die1++)						//Loop for all outcomes of the first die
	{							
		for (int die2 = 1; die2 <= 6; die2++)					//loop for all outcomes of the second die, nested with the first above
		{
			if ((die1 + die2) > 6)								//tests for sum of numbers greater than 6
			{
				HigherSums = HigherSums + 1;					//records 1 for each sum greater than 6
			}
			Total = Total + 1;									//records for all listing of number done
			cout << "[" << die1 << "," << die2 << "]" << endl;
		}
	}
	Percentage = (HigherSums / Total) * 100;					//uses the available figures to calculate percentage of sums greater than 6
	cout << endl << "Combination of Numbers Greater than 6 = " << Percentage << "%" << endl;
	cout << endl << "Smallest Combination is: [" << LowestOutcome << "," << LowestOutcome << "] and Largest Combination is: [" << HighestOutcome << "," << HighestOutcome << "]" << endl;

}