#include <stdio.h>


#define LIMIT 1000

int main(){
    printf("%d", LIMIT);
#undef LIMIT

    int LIMIT = 1001;
    printf("\n%d", LIMIT);

    return 0;



}