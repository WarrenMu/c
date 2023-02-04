#include <stdio.h>
char func1() { return 'a'; }
char func2() { return 'b'; }
char func3() { return 'c'; }
 
char (*xarr[])() = { func1, func2, func3 };
char (*(*x())[])() { return &xarr; }
 
int main()
{
    printf("%c\n", ((*(x()))[0])());
    printf("%c\n", ((*(x()))[1])());
    printf("%c\n", ((*(x()))[2])());
    return 0;
}