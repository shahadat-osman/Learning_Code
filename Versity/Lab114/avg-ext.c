#include<stdio.h>
int main()
{
    int i=1, marks, student;
    float sum=0, avg;

    printf("How many students?\n");
    scanf("%d", &student);
    printf("Enter %d student's marks:\n", student);
    while(i<student)
    {
        scanf("%d", &marks);
        sum=sum+marks;
        ++i;
    }
    avg=sum/(--i);
    printf("Total Marks = %.2f\nAverage: %.2f", sum, avg);
}