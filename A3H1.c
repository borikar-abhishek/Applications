//Write a program which accept one number from user and print that number of even number on screen


/*
START
     Accept one number from user
	 If number is less than zero then return nothing
	 For iCnt =1 
	     check condition iCnt<= 2*iNo
		If true then print iCnt 
	    If false then come out of loop
		Increment iCnt by 1 and again check for the condition unless it becomes false
		
STOP
*/

#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt = 0;
	
	if(iNo <= 0)
	{
		return;
	} 
	
	for(iCnt=1; iCnt<=2*iNo;iCnt++)
	{
		if(iCnt%2 == 0)
		{
			printf("%d\n",iCnt);
		}
			
	}
}

int main()
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	PrintEven(iValue);
		
	return 0;
}