#include <iostream>
using namespace std;

int main()
{
    int NumOfEntries, j, k, l, m, Num1, Num2, Num3, Num4, Num5, Num1_1, Num1_2, Num2_1, Num2_2, Num3_1, Num3_2, Num4_1, Num4_2, Num5_1, Num5_2;
    int Even1, Even2, Even3, Even4, Even5, Odd1, Odd2, Odd3, Odd4, Odd5, Total_Evens, Total_Odds, Total_Tens;

    NumOfEntries = j = k = l = m = Num1 = Num1_1 = Num1_2 = Num2 = Num2_1 = Num2_2 = Num3 = Num3_1 = Num3_2 = Num4 = Num4_1 = Num4_2 = 0;
    Num5 = Num5_1 = Num5_2 = Even1 = Even2 = Even3 = Even4 = Even5 = Total_Evens = Total_Odds = Total_Tens = 0;
    Odd1 = Odd2 = Odd3 = Odd4 = Odd5 = 0;

    cout << "Only Enter Five Numbers Greater than \'10\' and does not end with Zero \'0\'" << endl;
    do
    {
        cout << "First Input: ";
        cin >> Num1;
        if (Num1 % 10 == 0 || Num1 < 10)
        {
            cout << "Invalid Number, Not Allowed" << endl;
            Num1 = 0;
        }
        NumOfEntries++;
        do
        {
            cout << "Second Input: ";
            cin >> Num2;
            if (Num2 % 10 == 0 || Num2 < 10)
            {
                cout << "Invalid Number, Not Allowed" << endl;
                Num2 = 0;
            }
            j++;
            do
            {
                cout << "Third Input: ";
                cin >> Num3;
                if (Num3 % 10 == 0 || Num3 < 10)
                {
                    cout << "Invalid Number, Not Allowed" << endl;
                    Num3 = 0;
                }
                k++;
                do
                {
                    cout << "Forth Input: ";
                    cin >> Num4;
                    if (Num4 % 10 == 0 || Num4 < 10)
                    {
                        cout << "Invalid Number, Not Allowed" << endl;
                        Num4 = 0;
                    }
                    l++;
                    do
                    {
                        cout << "Fifth Input: ";
                        cin >> Num5;
                        if (Num5 % 10 == 0 || Num5 < 10)
                        {
                            cout << "Invalid Number, Not Allowed" << endl;
                            Num5 = 0;
                        }
                        m++;
                    } while (m < 1);
                } while (l < 1);
            } while (k < 1);
        } while (j < 1);
    } while (NumOfEntries < 1);
    if (Num1 % 10 != 0 && Num1 > 10)
    {
        Num1_1 = Num1 / 10;
        Num1_2 = Num1 % 2;
        if (Num1_2 == 0)
        {
            Even1 = 1;
        }
        else
        {
            Odd1 = 1;
        }
    }
    if (Num2 % 10 != 0 && Num2 > 10)
    {
        Num2_1 = Num2 / 10;
        Num2_2 = Num2 % 2;
        if (Num2_2 == 0)
        {
            Even2 = 1;
        }
        else
        {
            Odd2 = 1;
        }
    }
    if (Num3 % 10 != 0 && Num3 > 10)
    {
        Num3_1 = Num3 / 10;
        Num3_2 = Num3 % 2;
        if (Num3_2 == 0)
        {
            Even3 = 1;
        }
        else
        {
            Odd3 = 1;
        }
    }
    if (Num4 % 10 != 0 && Num4 > 10)
    {
        Num4_1 = Num4 / 10;
        Num4_2 = Num4 % 2;
        if (Num4_2 == 0)
        {
            Even4 = 1;
        }
        else
        {
            Odd4 = 1;
        }
    }
    if (Num5 % 10 != 0 && Num5 > 10)
    {
        Num5_1 = Num5 / 10;
        Num5_2 = Num5 % 2;
        if (Num5_2 == 0)
        {
            Even5 = 1;
        }
        else
        {
            Odd5 = 1;
        }
    }
    Total_Tens = Num1_1 + Num2_1 + Num3_1 + Num4_1 + Num5_1;
    Total_Evens = Even1 + Even2 + Even3 + Even4 + Even5;
    Total_Odds = Odd1 + Odd2 + Odd3 + Odd4 + Odd5;

    cout << "Total Tens = " << Total_Tens << endl;
    cout << "Total Odd Numbers = " << Total_Odds << endl;
    cout << "Total Even Numbers = " << Total_Evens << endl;
    return 0;
}