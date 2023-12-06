#include<stdio.h>
#define pi 3.141

float area_circle(float);

float area_circle(float r)
{
    float a;
    a = pi*r*r;
    return a;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        float radius, area;
        printf("Enter the radius of circle: ");
        scanf("%f", &radius);

        area = area_circle(radius);
        printf("The area of a circle is %f", area);

    printf("\n");
    return 0;
}