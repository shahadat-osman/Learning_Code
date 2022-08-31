#include<stdio.h>
int main()
{
    float num;
    int choice;

    printf("1.Feet to meter.\n2.Meter to feet.\n");
    printf("Enter your choice-");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("Enter number of feet: ");
        scanf("%f", &num);
        printf("Meters: %f", num/3.28);
    }
    else
    {
        printf("Enter number of meter:");
        scanf("%f", &num);
        printf("Feet: %f", num*3.28);
    }

    return 0;
}