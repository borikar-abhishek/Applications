//Write a program which accepts number from user and return the count of digits in between 3 and 7.
//Input :2395
//Output :1
//Input :9922
//Output :0

/*
START
     Accept number from user	   
	   while the number is greater then 0
	   follow iNo%10 and if the result of it lies between 3 and 7 then increment counter by 1
	   Now the number equal to iNo/10
	   Follow these steps till iNo>0
	   And at the end return value of counter
STOP
*/
#include<stdio.h>

int CountRange(int iNo)
{
	int iDigit = 0, iCnt = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo%10;
		if((iDigit>3)&&(iDigit<7))
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
	
	printf("Enter the number :");
	scanf("%d",&iValue);
	
	iRet = CountRange(iValue);
	printf("The count of digits in between 3 and 7 are : %d",iRet);
	
	return 0;
}