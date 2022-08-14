//all about loop & break and continue;
#include<stdio.h>
int main()
{
    int q, r, n, m=1, z=1, p=0, num=0;

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