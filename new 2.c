//write a C program to find the largest number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Enter the third number");
    scanf("%d",&c);
    if (a>b)
    {
        if(a>c)
        printf("first number is the greatest");
        else
        printf("third number is the greatest");
    }
    else
    {
        if (b>c)
            printf("second number is the greatest");
        else
            printf("third number is the greatest");
    }

}

