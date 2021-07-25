//Write a program which accepts number from user and count frequecy of 4 in it.

//Input : 9440
//Output : 2
//Input : 2395
//Output : 0

/*
START
     Accept number from user and the number whose count is to be displayed
	  if number is negative then convert it into positive
	   if number is equal to zero then return 1
	   if number is less than zero or greater than 4 then print invalid digits
	   
	   while the number is greater then 0
	   follow iNo%10 and if the result of it equals to i then increment counter by 1
	   Now the number equal to iNo/10
	   Follow these steps till iNo>0
	   And at the end return value of counter	
STOP
*/




#include<stdio.h>

int CountFour(int iNo, int i)
{
	int iDigit = 0,iCnt = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	if((i<0)||(i>4))
	{
		printf("Invalid number");
		return 0;
	}
	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit==i)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	int iRet = 0;
	printf("Enter the number : \n");
	scanf("%d", &iValue1);
	printf("Frequency : \n");
	scanf("%d", &iValue2);
	
	iRet = CountFour(iValue1,iValue2);
	printf("Frequecy of 4 in the number is :%d",iRet);
	
	return 0;
}