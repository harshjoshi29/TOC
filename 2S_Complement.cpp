#include <iostream>
#define SZ 6
using namespace std;
int main()
{
    char bn[SZ + 1], onComp[SZ + 1], twComp[SZ + 1];
    int i, carr = 1;
    int er = 0;
    cout << "\n\n two's complement of a binary value assigned:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a " << SZ << " bits binary value: ";
    cin >> bn;
    for (i = 0; i < SZ; i++) 
    {
        if (bn[i] == '1') 
        {
            onComp[i] = '0';
        }
        else if (bn[i] == '0') 
        {
            onComp[i] = '1';
        }
        else 
        {
            cout << "Wrong Input. Input the value of assign bits." << endl;
            er = 1;
            break;
        }
    }
    onComp[SZ] = '\0';

    for (i = SZ - 1; i >= 0; i--) 
    {
        if (onComp[i] == '1' && carr == 1) 
        {
            twComp[i] = '0';
        }
        else if (onComp[i] == '0' && carr == 1) 
        {
            twComp[i] = '1';
            carr = 0;
        }
        else 
        {
            twComp[i] = onComp[i];
        }
    }
    twComp[SZ] = '\0';
    if (er == 0) 
    {
        cout << " GFiven binary = " << bn << endl;
        cout << " After ones complement = " << onComp << endl;
        cout << " After twos complement = " << twComp << endl;
    }
}

//Output
/*
Find two's complement of a binary value:
----------------------------------------------
 Input a 8 bit binary value: 101010
 The original binary = 101010
 After ones complement = 010101
 After twos complement = 010101
*/