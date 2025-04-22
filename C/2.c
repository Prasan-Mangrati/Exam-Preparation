// Check odd or even using userdefined functions

#include <stdio.h>
void check();

int main()
{
    check();
}

void check()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}