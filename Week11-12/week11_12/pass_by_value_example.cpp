#include <iostream>

using namespace std;

int x = 0;
int y = 0;

void foo(int y)
{
    cout << "(1): " << x << endl;
    cout << "(2): " << y << endl;
    y = y+1;
    y=y*x;
    cout << "(3): " << x << endl;
    cout << "(4): " << y << endl;
    
}

int main()
{
    x = 2;
    foo(x);
    cout << "(5): " << x << endl;
    cout << "(6): " << y << endl;

    return 0;
}



