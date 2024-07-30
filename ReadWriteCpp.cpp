#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

    fstream nameTextFile;

    nameTextFile.open("./text.txt", ios::in);

    if (!nameTextFile)
        cout << "file doesn't exist." << endl;
    else
    {
        char buffer;
        string name = "";

        while (!nameTextFile.eof())
        {
            nameTextFile >> buffer;
            if (buffer != ',')
                name += buffer;
            else
            {
                cout << name << endl;
                name = "";
            }
        }
    }
    
    nameTextFile.close();

    return 0;
}