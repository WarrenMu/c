#include <limits.h>
#include <stdio.h>

int main(){
    printf("mini int value = %d\n"
        "max int value = %d\n"
        "size of int in bytes = %zu\n"
        "sixe of int in bits = %zu",
        INT_MIN, INT_MAX, sizeof(int),
        sizeof(int)* CHAR_BIT
    );
}