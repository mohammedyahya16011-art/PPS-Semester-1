//write a C program to find the largest of 3 numbers
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
    {if (a>b && a>c)
    printf("A is greatest number");
    }
    {if else (b>a && b>c)
    printf("B is greatest number");
    }
    {else (c>a && c>b)
    printf("C is the greatest number");
    }
}
