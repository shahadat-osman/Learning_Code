#include<stdio.h>
int convert();

int main()
{
    int pound;
    pound=convert();
    printf("In Pound(s): %d", pound);

    return 0;
}
int convert()
{
    int dollar;

    printf("Enter dollar(s): ");
    scanf("%d", &dollar);
    return dollar/2;
}