#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3.1;  // coersion (implicit)
    
    printf("%d\n", a);
    printf("%d\n", b);
    
    double c = 10.2;
    a = b + (int) c; // type conversion (explicit) ---- type casting
    
    printf("%d\n", a);
    
    int x = 100;
    double y = 9.99;
    x = y;  // coersion
    
    printf("%d\n", x);
    
    return 0;
}

