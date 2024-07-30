#include <iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main()
{
    string Student[20]; string Subjects[12]; string Level[12];
    float Percent, TotalWeight = 0; float weight = 0;
    float Table[20][12] = {{9,10,8,8,9,10,9,10,8,8,9,10},{9,7,5,8,6,10,9,7,5,8,6,10},{9,3,8,5,9,1,9,3,8,5,9,1},{9,4,4,8,9,5,9,4,4,8,9,5},
                           {9,1,8,8,8,10,9,1,8,8,8,10,}, {9,10,8,8,9,10,9,10,8,8,9,10},{9,7,5,8,6,10,9,7,5,8,6,10,},{9,3,8,5,9,1,9,3,8,5,9,1},{9,4,4,8,9,5,9,4,4,8,9,5},
                           {9,1,8,8,8,10,9,1,8,8,8,10}, {9,4,4,8,9,5,9,4,4,8,9,5}, {9,7,5,8,6,10,9,7,5,8,6,10,}, {9,3,8,5,9,1,9,3,8,5,9,1}, {9,4,4,8,9,5,9,4,4,8,9,5},
                           {9,1,8,8,8,10,9,1,8,8,8,10}, {9,4,4,8,9,5,9,4,4,8,9,5}, {9,1,8,8,8,10,9,1,8,8,8,10}, {9,1,8,8,8,10,9,1,8,8,8,10}, {9,4,4,8,9,5,9,4,4,8,9,5},
                           {9,1,8,8,8,10,9,1,8,8,8,10}};
    cout << "\t\t";
    for (int row = 0; row < 1; row++)
    {
        for (int column = 0; column< 12; column++)
        {
             cout << setw(3) << left << "Sub:" << column + 1 << "\t ";
            
        }
    }
    cout << "LEVEL" << endl;
    for (int row = 0; row < 20; row++)
    {
        cout <<endl<< setw(3) << left << "Student:" << row + 1 << "\t ";
        for (int column = 0; column < 12; column++)
        {
            cout << setw(3) << left << Table[row][column] << "\t ";
            weight = (Table[row][column] / 10);
            TotalWeight = TotalWeight + weight; 
        }
        
        Percent = ((TotalWeight / 12) * 100);
        TotalWeight = 0;
        if (Percent > 80)
        {
            Level[row] = "Excellent";
        }
        else if (Percent > 75 && weight < 80)
        {
            Level[row] = "2nd Category";
        }
        else if (Percent > 50 && weight < 75)
        {
            Level[row] = "3rd Category";
        }
        else
        {
            Level[row] = "Unsatisfactory";
        }
        cout << setw(3) << left << Level[row] << "\t "<<endl;
    }

    return 0;
}