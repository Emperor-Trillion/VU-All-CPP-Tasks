#include <iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
                                                //This program uses grades which I have already assigned to each student
int main()
{
    string Student[20]; string Subjects[12]; string Level[12];
    float Table[20][12] = {{9,10,8,9,9,10,9,10,8,9,9,10},{9,7,5,8,6,10,9,7,5,8,6,10},{9,7,8,9,6,8,9,9,5,5,9,9},{9,4,4,8,9,5,9,4,4,8,9,5},
                           {9,1,8,8,8,10,9,1,8,8,8,10,}, {9,10,8,8,9,10,9,10,8,8,9,10},{9,7,5,8,6,10,9,7,5,8,6,10,},{9,3,8,5,9,1,9,3,8,5,9,1},{9,4,4,8,9,5,9,4,4,8,9,5},
                           {9,1,8,8,8,10,9,1,8,8,8,10}, {9,4,4,8,9,5,9,4,4,8,9,5}, {9,7,5,8,6,10,9,7,5,8,6,10,}, {9,3,8,5,9,1,9,3,8,5,9,1}, {9,4,4,8,9,5,9,4,4,8,9,5},
                           {9,1,8,8,8,10,9,1,8,8,8,10}, {9,4,4,8,9,5,9,4,4,8,9,5}, {9,1,8,8,8,10,9,1,8,8,8,10}, {9,1,8,8,8,10,9,1,8,8,8,10}, {9,4,4,8,9,5,9,4,4,8,9,5},
                           {9,4,10,10,10,10,9,10,10,10,10,10}};
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
        float count1 =0, count2 =0, count3 =0, count4 =0;
        cout <<endl<< setw(3) << left << "Student:" << row + 1 << "\t ";
        for (int column = 0; column < 12; column++)
        {
            cout << setw(3) << left << Table[row][column] << "\t ";
            if (Table[row][column] >= 9)
            {
                count1 = count1 + 1;
            }
            else if (Table[row][column] >= 7 && Table[row][column] < 9)
            {
                count2 = count2 + 1;
            }
            else if (Table[row][column] >= 5 && Table[row][column] < 7)
            {
                count3 = count3 + 1;
            }
            else if (Table[row][column] < 5)
            {
                count4 = count4 + 1;
            }
        }
        if (count4 > 0 )
        {
            Level[row] = "Unsatisfactory";
        }
        else if ((count3 / 12) * 100   >= 25 && count4 == 0)
        {
            Level[row] = "3rd Category";
        }
        else if ((count1 / 12) * 100 >= 80 && (count2 / 12) * 100 <= 20 && count3 == 0 && count4 == 0)
        {
            Level[row] = "Excellent";
        }
        else if (((count1 + count2) / 12) * 100 >= 75 && (count3 / 12) * 100 <= 25 && count4 == 0 )
        {
            Level[row] = "2nd Category";
        }
        cout << setw(3) << left << Level[row] << "\t "<<endl;
    } 
    return 0;
}