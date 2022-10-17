#include<stdio.h>
int main()
{
    int i=1, marks;
    float t_marks=0, avg;

    printf("Enter Marks:\n");
    while(i<=10)
    {
        scanf("%d", &marks);
        t_marks=marks+t_marks;
        i++;
    }
    avg=t_marks/10;
    printf("Total marks = %.2f\n", t_marks);
    printf("Average marks = %.2f", avg);
    return 0;
}