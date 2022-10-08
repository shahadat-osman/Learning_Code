//using sqrt in assignment statement and simply used to printf function.
#include<stdio.h>
#include<math.h>
int main2();

int main()
{
    double answer;

    answer=sqrt(10.0);
    printf("%f\n", answer);

    main2();

    return 0;
}
int main2()
{
    printf("%f", sqrt(10.0));

    return 0;
}