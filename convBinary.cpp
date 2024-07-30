#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

void DecimalToBinary1(int array[8]);        //Function to convert all decimal numbers entered to binary
void DecimalToBinary2(int array[8]);        //Function to convert all decimal numbers and the new binary number to binary
void printarray1(int parray[8][8], int row, int column);    //Function to print 8 by 8 dimensional array
void printarray2(int parray[8][9], int row, int column);    //Function to print 8 by 9 dimensional array

int main()
{
    int input, Length, LastDigit, RemainingDigits, Temp, FirstStep, SecondStep, array1[8], array2[8];
    string TestLength; long long int binary;        //binary is of type long long int to take bigger int inputed for binary by user
    cout << "Enter 8 different Numbers between '1' and '255'" << endl;
    for (int i = 0; i < 8; i++) {
    Starting:       //For goto statement on line 22, if condition on line 20 is not met
        cin >> input;
        if (input < 0 || input > 256) {              //To make sure numbers entered are within accepted range
            cout << "You have a number outside the accepted range. Try Again" << endl;
            goto Starting;
        }
        else {
            array1[i] = input;
            if (i != 7) { cout << "Entry Accepted! Enter the next Number" << endl; } //To make sure this line is not printed after 8th entry
        }
    }
    cout << "Input the your Binary number. Number of Digits should not exceed '9' " << endl;
    Starting2:      //For  goto statement on line 36 and 48 if entry is not binary or out of accepted range
    cin >> binary;
    TestLength = to_string(binary);     //Convert binary input to string
    Length = TestLength.length();       //Get length of binary input
    if (Length < 1 || Length > 9) {     //To make sure binary number entered is within accepted range
        cout << "You have a number outside the accepted range. Try again" << endl;
        goto Starting2;                 //Return to line 30 for user to enter binary number again, since the condition is not met
    }
    Temp = FirstStep = SecondStep = LastDigit = RemainingDigits = 0;    //Convert binary number entered to decimal for ease of addition to 1-D array
    while (binary > 0) {
        LastDigit = binary % 10;
        RemainingDigits = binary / 10;
        FirstStep = LastDigit * pow(2, Temp);
        SecondStep = FirstStep + SecondStep;
        binary = RemainingDigits;
        Temp++;
        if (LastDigit < 0 || LastDigit > 1) {               //To make sure number entered is binary number greater than 1
            cout << "The Binary number you eneterd is invalid. Try again" << endl;
            goto Starting2;                                 //Return user to line 30 since number is not binary
        }
    }
    for (int A = 0; A < 8; A++) {                    //To add converted binary number to each decimal number and put it into a different array
        array2[A] = SecondStep + array1[A];
    }
    cout << endl << "YOUR 1-D ARRAY OF NUMBERS ENTERED IS:" << endl;
    for (int Dec = 0; Dec < 8; Dec++) {
        if (array1[Dec] < 10) {
            cout << "|00" << array1[Dec] << "|" << endl;
        }
        else if (array1[Dec] >= 10 && array1[Dec] < 100) {
            cout << "|0" << array1[Dec] << "|" << endl;
        }
        else {
            cout << "|" << array1[Dec] << "|" << endl;
        }
    }
    cout << endl << "YOUR 2-D ARRAY OF BINARY NUMBERS IS:" << endl;
    DecimalToBinary1(array1);
    cout << endl << endl;
    cout << "YOUR 2-D ARRAY OF BINARY NUMBERS WITH THE ADDED BINARY ENTERED IS:" << endl;
    DecimalToBinary2(array2);
    return 0;
}
void DecimalToBinary1(int array[8])                 //Definition of function to convert 1-D array of decimal values to
{                                                   // binary values of 8 by 8 Dimensional and print it
    int arrayy[8][8];
    for (int S = 0; S < 8; S++) {
        for (int T = 0; T < 8; T++) {
            arrayy[S][T] = 0;
        }
    }
    for (int Fi = 0; Fi < 8; Fi++) {
        int U, V;
        U = Fi; V = 0;
        while (array[U] > 0) {
            arrayy[U][V] = array[U] % 2;
            array[U] = array[U] / 2;
            V++;
        }
    }
    printarray1(arrayy, 8, 8);
}
void DecimalToBinary2(int array[8])                 //Definition of function to convert 1-D array of decimal values to
{                                                   // binary values of 8 by 9 Dimensional and print it
    int arrayy[8][9];
    for (int S = 0; S < 8; S++) {
        for (int T = 0; T < 9; T++) {
            arrayy[S][T] = 0;
        }
    }
    for (int Fi = 0; Fi < 8; Fi++) {
        int U, V;
        U = Fi; V = 0;
        while (array[U] > 0) {
            arrayy[U][V] = array[U] % 2;
            array[U] = array[U] / 2;
            V++;
        }
    }
    printarray2(arrayy, 8, 9);
}
void printarray1(int parray[8][8], int row, int column) //Definition of function to print 8 by 8 array
{
    for (int n = 0; n < row; n++) {
        cout << "|";
        for (int m = column - 1; m >= 0; m--) {
            cout << setw(1) << left << parray[n][m];
            if (m != 0) { cout << "    "; }
        }cout << "|";
        cout << endl;
    }
}
void printarray2(int parray[8][9], int row, int column) //Definition of function to print 8 by 9 array
{
    for (int n = 0; n < row; n++) {
        cout << "|";
        for (int m = column - 1; m >= 0; m--) {
            cout << setw(1) << left << parray[n][m];
            if (m != 0) { cout << "    "; }
        }cout << "|";
        cout << endl;
    }
}