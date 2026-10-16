//write a C program to find the average of 3 numbers
#include<stdio.h>
#include<conio.h>
void main()

{

    float a,b,c,d;
    printf("Enter the first number\n");
    scanf("%f", &a);
    printf("Enter the second number\n");
    scanf("%f",&b);
    printf("Enter the third number\n");
    scanf("%f",&c);
    d=(a+b+c)/3;
    printf("The average of 3 number is =%f",d);



}

