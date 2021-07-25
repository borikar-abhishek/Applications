//Write a program which accepts number from user and return the count of even digits.
//Input : 2395
//Output : 1
//Input : 1018
//Output : 1

/*
START
     Accept number from user	   
	   while the number is greater than 0
	   follow iNo%10 and if the result of it is completely divisible by 2 then increment counter by 1
	   Now the number equal to iNo/10
	   Follow these steps till iNo>0
	   And at the end return value of counter
STOP
*/

#include<stdio.h>

int CountEven(int iNo)
{
	int iDigit = 0, iCnt = 0;
	
	while(iNo>0)
	{
		iDigit = iNo%10;
		if((iDigit%2)==0)
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
	
	
	iRet = CountEven(iValue);
	printf("Count of number which are even : %d",iRet);
	
	return 0;
}