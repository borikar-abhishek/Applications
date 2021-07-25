//Accept two number from user and check whether first number is divisible by second number
//
//Program is done by myself     check sir program 

#include<stdio.h>

/*
0 to 35       Fail
35 to 50      Pass Class
50 to 60      Second Class
60 to 70      First Class
70 to 100     Distinction
*/


void CheckResult(int iMarks)
{
	if(iMarks >= 0 && iMarks<35)
	{
		printf("Your are fail\n");
	}
	if(iMarks>=35 && iMarks<50)
	{
		printf("Your are Pass Class");
	}
	if(iMarks>=50 && iMarks<60)
	{
		printf("You are Second class");
	}
	if(iMarks>=60 && iMarks<70)
	{
		printf("You are First class");
	}
	if(iMarks>=70 && iMarks<100)
	{
		printf("You are Distinction");
	}
}

int main()
{
	int iValue = 0;
	printf("Enter your marks \n");
	scanf("%d",&iValue);
	
	CheckResult(iValue);
	return 0;
	
	
}