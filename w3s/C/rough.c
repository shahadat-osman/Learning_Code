#include<stdio.h>
int main()
{
    int n, p, num=0;

   //while loop
    while (num<=5)
   {
    printf("%d Hello World\n", num);
    num++;
   }

   //do loop
   do
   {
    printf("Hello Tech People %d\n", num);
    num=num+2;
   }
   while (num<=10);

   //for loop
    for (n=1; n<=10; n=n+2)
   {
   printf("Hello Programmers! %d\n", n);
   }

    //for loop with break
    int i;
   for (i=0; i<10; i++)
   {
    if(i==4) 
    {
        break;
    }
    printf("%d Hello Coder\n", i);
   }

    //for loop with continue
   for (p=1; p<=10; p++)
   {
    if (p==6)
    {
        printf("%d Not Allowed\n", p);
        continue;
    }
    printf("%d Hello Shahadat\n", p);
   }

    return 0;
}