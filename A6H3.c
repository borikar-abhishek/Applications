// Write a program which accept number from user and count frequency of 2 in it.

//Input : 2395
//Output : 1
//Input : 9000
//Output : 0

/*
START
       Accept number from user and the number whose count is to be displayed
	   if number is negative then convert it into positive
	   if number is equal to zero then return 1
	   if number is less than zero or greater than 2 then print invalid digits
	   
	   while the number is greater then 0
	   follow iNo%10 and if the result of it equals to i then increment counter by 1
	   Now the number equal to iNo/10
	   Follow these steps till iNo>0
	   And at the end return value of counter
STOP
*/

#include<stdio.h>

int CountTwo(int iNo, int i)
{
	int iDigits = 0, iCnt = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	if(iNo ==0)
	{
		return 1;
	}
	if((i<0)||(i>2))
	{
		printf("Invalid digits\n ");
		return 0;
	}
	while(iNo>0)
	{
		iDigits = iNo%10;
		if(iDigits == i)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue1 = 0,iValue2 = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d", &iValue1);
	
	printf("Enter the digit you want to search: \n");
	scanf("%d", &iValue2);
	
	iRet = CountTwo(iValue1,iValue2);
	
	printf("%d",iRet);
	
	return 0;
}