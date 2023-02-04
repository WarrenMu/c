/* Example */
 
#include <stdio.h>
 
typedef char charray5[5];
 
charray5 carr1 = { 'a', 'b', 'c', 'd', '\0' };
charray5 carr2 = { 'q', 'w', 'e', 'r', '\0' };
charray5 carr3 = { 'x', 'y', 'z', 'w', '\0' };
 
charray5* func1() { return &carr1; }
charray5* func2() { return &carr2; }
charray5* func3() { return &carr3; }
 
char (*(*x[3])())[5] = { func1, func2, func3 };
 
int main()
{
    printf("func1 = [%c, %c, %c, %c]\n",
           ((*(x[0]))())[0][0], ((*(x[0]))())[0][1],
           ((*(x[0]))())[0][2], ((*(x[0]))())[0][3]);
    printf("func2 = [%c, %c, %c, %c]\n",
           ((*(x[1]))())[0][0], ((*(x[1]))())[0][1],
           ((*(x[1]))())[0][2], ((*(x[1]))())[0][3]);
    printf("func3 = [%c, %c, %c, %c]\n",
           ((*(x[2]))())[0][0], ((*(x[2]))())[0][1],
           ((*(x[2]))())[0][2], ((*(x[2]))())[0][3]);
    return 0;
}