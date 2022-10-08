//The moon's gravity is about 17 percent of Earth's. write a program that allows you to enter your weight and computes your effective weight on the moon.
#include<stdio.h>
int main()
{
    float weight, m_weight, conversion=17.0/100;

    printf("Enter weight on earth:");
    scanf("%f", &weight);
    
    m_weight=weight*conversion;
    printf("Moon's weight is: %0.2f", m_weight);

    return 0;
}