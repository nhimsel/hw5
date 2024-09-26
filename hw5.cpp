#include <iostream>

using namespace std;

string decimalToHex(int i);
char intToChar(int i);

int main()
{
    cout << "Enter a decimal integer: " << endl;
    string in;
    cin >> in;
    string out = decimalToHex(stoi(in));
    cout << "That is " << out << " in hexadecimal." << endl;
    return 0;
}

string decimalToHex(int i)
{
    string hex;
    do 
    {
        hex = intToChar(i%16) + hex;
        i/=16;    
    }
    while (i>0);
    return hex;
}

char intToChar(int i)
{
    if (i<10&&i>=0)
    {
        char c = '0' + i;
        return c;
    }
    else if (i>=10&&i<=15)
    {
        i-=10;
        char c = 'A' + i;
        return c;
    }

    //throw an error if a non-hex value is sent
    else 
    {
        cout << "ERROR: This integer is not between 0 and 15." << endl;
        return '?';
    }
}