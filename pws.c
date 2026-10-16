#include<stdio.h>
int main()
{

int uid,upwd,sid,spwd;

sid=123;
spwd=123;

printf("enter uid ,pwd in numbers");
scanf("%d %d",&uid,&upwd);

if((uid==sid)&&(upwd==spwd))
printf("login sucessful");
else
printf("invalid credentials");

}
