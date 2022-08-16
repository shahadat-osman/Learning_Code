//all about loop
#include<stdio.h>
int main()
{
   char L;
   int n;

   printf("Input a letter: ");
   scanf("%c", &L);

   (L>='a' && L<='z')? printf("%c is lower case", L): printf("%c is upper case.", L);
   (n>=0 && n<=9)? printf("%i is a number", n): printf("%i is wrong Input", n);
    

    return 0;
}