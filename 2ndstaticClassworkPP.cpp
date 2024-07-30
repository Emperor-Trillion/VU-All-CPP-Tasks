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
             cout << setw(4) << left << "Sub:" << column + 1 << "\t";
        }
        cout << "LEVEL" << endl << endl;
        cout<< setw(8) << left  << "UNITS:" << "\t";
        cout << " 6\t 4\t5\t5\t5\t5\t6\t 3\t6\t5\t5\t 5\t" << endl;
    }
    for (int row = 0; row < 20; row++)
    {
        float cummulativeUnit1 = 0, cummulativeUnit2 = 0, cummulativeUnit3 = 0, cummulativeUnit4 = 0;
        cout <<endl<< setw(3) << left << "Student:" << row + 1 << "\t ";
        for (int column = 0; column < 12; column++)
        {
            float markUnitCount61 = 0, markUnitCount51 = 0, markUnitCount41 = 0, markUnitCount31 = 0;
            float markUnitCount62 = 0, markUnitCount52 = 0, markUnitCount42 = 0, markUnitCount32 = 0;
            float markUnitCount63 = 0, markUnitCount53 = 0, markUnitCount43 = 0, markUnitCount33 = 0;
            float markUnitCount64 = 0, markUnitCount54 = 0, markUnitCount44 = 0, markUnitCount34 = 0;
            cout << setw(3) << left << Table[row][column] << "  \t";
            if (Table[row][column] >= 9)
            {
                if (column == 1) markUnitCount41 = 4;
                else if (column == 7) markUnitCount31 = 3;
                else if (column == 0 || column == 6 || column == 8) markUnitCount61 = 6; 
                else markUnitCount51 = 5;
                cummulativeUnit1 = markUnitCount61 + markUnitCount51 + markUnitCount41 + markUnitCount31 + cummulativeUnit1;
            }
            else if (Table[row][column] >= 7 && Table[row][column] < 9)
            {
                if (column == 1) markUnitCount62 = 4; 
                else if (column == 7) markUnitCount52 = 3;
                else if (column == 0 || column == 6 || column == 8) markUnitCount42 = 6;
                else markUnitCount32 = 5;
                cummulativeUnit2 = markUnitCount62 + markUnitCount52 + markUnitCount42 + markUnitCount32 + cummulativeUnit2;
            }
            else if (Table[row][column] >= 5 && Table[row][column] < 7)
            {
                if (column == 1) markUnitCount63 = 4; 
                else if (column == 7) markUnitCount53 = 3;
                else if (column == 0 || column == 6 || column == 8) markUnitCount43 = 6;
                else markUnitCount33 = 5;
                cummulativeUnit3 = markUnitCount63 + markUnitCount53 + markUnitCount43 + markUnitCount33 + cummulativeUnit3;
            }
            else if (Table[row][column] < 5)
            {   
                if (column == 1) markUnitCount64 = 4; 
                else if (column == 7) markUnitCount54 = 3;
                else if (column == 0 || column == 6 || column == 8) markUnitCount44 = 6;
                else markUnitCount34 = 5;
                cummulativeUnit4 = markUnitCount64 + markUnitCount54 + markUnitCount44 + markUnitCount34 + cummulativeUnit4;
            }
            //cout << "First" << "\t" << cummulativeUnit1 << "\t "<< cummulativeUnit2 << "\t "<< cummulativeUnit3 << "\t "<< cummulativeUnit4 << "\t "<<endl;
        }
        if (cummulativeUnit4 > 1 )
        {
            Level[row] = "Unsatisfactory";
        }
        else if (cummulativeUnit1 >= 48 && cummulativeUnit2 <= 12 &&  cummulativeUnit3 == 0 && cummulativeUnit4 == 0 ) 
        {
            Level[row] = "Excellent";
        }
        else if ((cummulativeUnit1+cummulativeUnit2) >= 45 && cummulativeUnit3 <= 15 && cummulativeUnit4 == 0 )
        {
            Level[row] = "2nd Category";
        }
        else //if ((cummulativeUnit3) >= 25  && cummulativeUnit4 == 0)
        {
            Level[row] = "3rd Category";
        }
        cout << setw(3) << left << Level[row] << endl;;
        //cout << "Second" << "\t" << cummulativeUnit1 << "\t "<< cummulativeUnit2 << "\t "<< cummulativeUnit3 << "\t "<< cummulativeUnit4 << "\t "<<endl;
    } 
    return 0;
}