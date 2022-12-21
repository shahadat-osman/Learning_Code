#include<stdio.h>
int square(int x)
{
    int sq;
    sq= x*x;

    return sq;
}
int cube(int x)
{
    int cb;
    cb= x*x*x;

    return cb;
}
int main()
{
    int numb;
    scanf("%d", &numb);

    printf("Square of %d is = %d\n", numb, square(numb));
    printf("Cube of %d is = %d\n", numb, cube(numb));

    return 0;
}