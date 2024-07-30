#include<iostream>
#include<iomanip>
using namespace std;

void DecimalToBinary(int Decimal);


int main()
{
    int input;
    int array1[8];
    int array2[8][8];
    cout << "Enter 8 different Number between '1' and '255'" << endl;
    for (int i = 0; i < 8; i++)
    {
        cin >> input;
        if (input < 1 || input > 256)
        {
            cout << "You have a number outside the accepted range. Input again" << endl;
            cin >> input;
        }
        else
        {
            array1[i] = input;
        }
    }
    cout << endl;
    for (int all = 0; all < 8; all++)
    {
        cout << array1[all] << "  ";
        DecimalToBinary(array1[all]);
        cout << endl;
    }
    return 0;
}
void DecimalToBinary(int Decimal)
{
    int binary[8];
    for (int S = 0; S <= 8; S++)
    {
        binary[S] = 0;
    }
    int i = 0;
    while (Decimal > 0)
    {
        binary[i] = Decimal % 2;
        Decimal = Decimal / 2;
        i++;
    }
    for (int j = 8; j > 0; j--)
    {
        cout << binary[j] << "  ";
    }
}