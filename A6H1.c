//Write a program which accepts number from user and display in reverse order.
//Input : 2395
//Output : 5
//         9
//         3
//         2
/*
START
     Accept number from user 
	 if number is negative then convert it into positive
	 while the number is greater then zero
	 follow the condition : iNo%10 and print the digit
	 Now iNo = iNo/10
     Follow these two conditions till iNo >0
STOP	 
*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
	int iDigit = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo%10;
		printf("%d\n",iDigit);
		iNo = iNo/10;
	}
}
int main()
{
	int iValue = 0;
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
	
	
	return 0;
}