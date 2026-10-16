//write a C program to find wheather the person is eligible to vote
#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter the person's age");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("Eligible to vote");

    }
    else
    {
        printf("Not eligible to vote");
    }
}
