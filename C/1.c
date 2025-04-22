//  WAP to find area of circle using user defined funcitons without return without argument

#include <stdio.h>
void area();

int main()
{
    area();
}

void area()
{
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    printf("The area of circle is %f",3.14*r*r);
}

