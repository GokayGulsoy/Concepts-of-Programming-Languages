#include <iostream>

using namespace std;

int x = 0;
int y = 0;

void foo(int &y)
{
    cout << "(A): " << x << endl;
    cout << "(B): " << y << endl;
    y = y+1;
    y=y*x;
    cout << "(C): " << x << endl;
    cout << "(D): " << y << endl;
    
}

int main()
{
    x = 2;
    foo(x);
    cout << "(E): " << x << endl;
    cout << "(F): " << y << endl;

    return 0;
}





