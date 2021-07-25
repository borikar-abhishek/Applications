//Write a program which accepts number from user and count frequency of such a digits which are less than 6.

//Input : 2395
//Output : 3
//Input : 96672
//Output : 1

/*
START
     Accept number from user 
	  if number is negative then convert it into positive
	   while the number is greater then 0
	   follow iNo%10 and if the result of it is less than 6 then increment counter by 1
	   Now the number equals to iNo/10
	   Follow these steps till iNo>0
	   And at the end return value of counter

STOP
*/

#include<stdio.h>

int Count(int iNo) 
{
	int iDigit = 0,iCnt = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit<6)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	
	iRet = Count(iValue);
	printf("Count of number which are less than 6 are : %d",iRet);
	
	return 0;
}