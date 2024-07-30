#include <iostream>
using namespace std;

int main()
{
    int ColouredOption, LightingOption, LenOfText, TotalPrice;                   //Variable for Colour, Lighting, Total price and length of words
    cout << "MINIMUM ORDER IS 5 LETTERS" << endl;
    cout << "Enter the number of Letters you have: " << endl;
    cin >> LenOfText;                                                       //Allows user to input the number of letters in their inscription
    if (LenOfText <= 5)                                                     //Checks if words inputed is more than minimum order
    {
        cout << "Do you want Coloured Text? Press 1 for \"Yes\" or Press 2 \"No\" " << endl; //Allows user to choos colour or black and white
        cin >> ColouredOption;
        if (ColouredOption == 1)
        {
            TotalPrice = 50 + 5;
            cout << "Do you want Lighting Services? Press 1 for \"Yes\" or Press 2 \"No\" " << endl; //Allows user to choose lighting or none
            cin >> LightingOption;
            if (LightingOption == 1)
            {
                TotalPrice = TotalPrice + 30;
                cout << "Total Cost for Billboard is: " << TotalPrice << " Euro" << endl;
            }
            else if (LightingOption == 2)
            {
                TotalPrice = TotalPrice + 0;
                cout << "Total Cost for Billboard is: " << TotalPrice << " Euro" << endl;
            }
            else
            {
                cout << "You have entered an ivalid selection";       //Checks if user makes selection that is not 'Yes' or 'No' for colour and light
            }
        }
        else if (ColouredOption == 2)                               //Option two if users don't want colour
        {
            TotalPrice = 50;
            cout << "Do you want Lighting Services? Press 1 for \"Yes\" or Press 2 \"No\" " << endl; //Check if users don't want lighting
            cin >> LightingOption;
            if (LightingOption == 1)
            {
                TotalPrice = TotalPrice + 30;
                cout << "Total Cost for Billboard is: " << TotalPrice << " Euro" << endl;
            }
            else if (LightingOption == 2)
            {
                TotalPrice = TotalPrice + 0;
                cout << "Total Cost for Billboard is: " << TotalPrice << " Euro" << endl;
            }
            else
            {
                cout << "You have entered an ivalid selection";
            }
        }
        else
        {
            cout << "You have entered an ivalid selection";
        }


    }
    else if (LenOfText > 5)                             //Checks if input words are more than 5 letters
    {
        TotalPrice = 50 + (5 * (LenOfText - 5));
        cout << "Do you want Coloured Text? Press 1 for \"Yes\" or Press 2 \"No\" " << endl;
        cin >> ColouredOption;
        if (ColouredOption == 1)
        {
            TotalPrice = TotalPrice + 5;
            cout << "Do you want Lighting Services? Press 1 for \"Yes\" or Press 2 \"No\" " << endl;
            cin >> LightingOption;
            if (LightingOption == 1)
            {
                TotalPrice = TotalPrice + 30;
                cout << "Total Cost for Billboard is: " << TotalPrice << " Euro" << endl;
            }
            else if (LightingOption == 2)
            {
                TotalPrice = TotalPrice + 0;
                cout << "Total Cost for Billboard is: " << TotalPrice << " Euro" << endl;
            }
            else
            {
                cout << "You have entered an ivalid selection";
            }
        }
        else if (ColouredOption == 2)
        {
            cout << "Do you want Lighting Services? Press 1 for \"Yes\" or Press 2 \"No\" " << endl;
            cin >> LightingOption;
            if (LightingOption == 1)
            {
                TotalPrice = TotalPrice + 30;
                cout << "Total Cost for Billboard is: " << TotalPrice << " Euro" << endl;
            }
            else if (LightingOption == 2)
            {
                TotalPrice = TotalPrice + 0;
                cout << "Total Cost for Billboard is: " << TotalPrice << " Euro" << endl;
            }
            else
            {
                cout << "You have entered an ivalid selection";
            }
        }
        else
        {
            cout << "You have entered an ivalid selection";
        }
    }
    return 0;
}