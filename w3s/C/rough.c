//all about loop
#include<stdio.h>
int main()
{
    int q, r, n, m=2, z=1, p=0, num=0;

    /* //while loop
    while (num<=5)
   {
    printf("%d Hello World\n", num);
    num++;
   } */

    /* //do loop
   do
   {
    printf("Hello Tech People %d\n", num);
    num=num+2;
   }
   while (num<=10); */

    /* //for loop
    for (n=1; n<=10; n=n+2)
   {
   printf("Hello Programmers! %d\n", n);
   } */

    /* //for loop with break
    int i;
   for (i=0; i<10; i++)
   {
    if(i==4) 
    {
        break;
    }
    printf("%d Hello Coder\n", i);
   } */

    /* //for loop with continue
   for (p=1; p<=10; p++)
   {
    if (p==6)
    {
        printf("%d Not Allowed\n", p);
        continue;
    }
    printf("%d Hello Shahadat\n", p);
   } */

    /* //while loop with break
   while (num<10)
   {
    if (num==4)
    {
        break;
    }
    printf("%d Today is friday\n", num);
    num++;
   } */

    /* //while loop with continue
   while (num<8)
   {
    if (num==5)
    {
        num++;
        continue;
    }
    printf("%d Hello Tahsin\n", num);
    num++;
   } */

   while (num<6)
   {
    printf("%d Nothing is impossible\n", num);
    num++;
   }

   do
   {
    printf("\n%d Everything is possible\n", p);
    p++;
   }
   while (p<8);

   for (n=0; n<9; n=n+2)
   {
    printf("%d Work hard and succeed\n", n);
   }

   for (q=0; q<7; q++)
   {
    {
        if (q==3)
        break;
    }
    printf("\n%d Practice makes Perfect\n", q);
   }

   for (r=1; r<5; r++)
   {
    {
        if (r==3)
        continue;
    }
    printf("%d God is One\n", r);
   }

   while (z<7)
   {
    if (z==5)
    {
        break;
    }
    printf("%d Do more and more\n", z);
    z++;
   }
   
   while (m<9)
   {
    if (m==5)
    {
        m++;
        continue;
    }
    printf("%d Laziness will make you looser\n", m);
    m++;
   }

    return 0;
}