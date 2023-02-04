// C program to illustrate
// \b escape sequence
#include <stdio.h>
int main(void)
{
    // \b - backspace character transfers
    // the cursor one character back with
    // or without deleting on different
    // compilers.
    printf("Hello Geeks\b\b\b\bF");
    
        // We are using \xhh escape sequence.
    // Here hh is one or more hexadecimal
    // digits(0....9, a...f, A...F).
    char* s = "B\x4a";
    printf("%s", s);
    return 0;
}