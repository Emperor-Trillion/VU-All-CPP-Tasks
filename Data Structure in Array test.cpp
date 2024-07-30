#include <iostream> 
#include <iomanip>
#include <cstdlib>
using namespace std;

struct PC                                                           
{
    string a;
    int b;
    float c;
};
int main()
{
    PC aa[3][3], bb[4][4], cc[2][2];
    
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            aa[i][j].a = "Just Test";
            cout << aa[i][j].a << "\t";
        }cout << endl;
    }cout << endl << endl;
    
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <4; j++)
        {
            bb[i][j].b = rand();
            cout << bb[i][j].b << "\t";
        }cout << endl;
    }cout << endl << endl;
    
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            cc[i][j].c = rand();
            cout << cc[i][j].c << "\t";
        }cout << endl;
    }cout << endl << endl;
 return 0;   
}
