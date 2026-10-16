//write a c program to check if the number is positive,negative or zero
#include<stdio.h>
int main ()
{
int number;
printf("enter any number");
scanf("%d",&number);

if (number>0)
printf("this is +ve");

if(number<0)
printf("this is -ve");

else
printf("zero");

}
