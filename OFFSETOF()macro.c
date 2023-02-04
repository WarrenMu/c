#include <stdio.h>
 
#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT))
 
typedef struct PodTag
{
   int i;
   double d;
   char c;
} PodType;
 
int main()
{
   printf("%lu", OFFSETOF(PodType, c));
    
   getchar();
   return 0;
}