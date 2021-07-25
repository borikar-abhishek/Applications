//Write a program which accepts number from user and return multiplication of all digits.
//Input : 2395
//Output : 270
//Input : 1018
//Output : 8

/*
START
     Accept number from user	  
       Take a variable iMult = 1	 
	   while the number is greater then 0
	   follow iNo%10 , multiply result of it with iMult
	   Now the number equal to iNo/10
	   Follow these steps till iNo>0
	   And at the end return value of iMult
STOP
*/

#include<stdio.h>

int MultDigit(int iNo)
{
	int iMult = 1;
	int iDigit = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit == 0)
		{
			iDigit = 1;
		}
		iNo = iNo/10;
		iMult = iMult*iDigit;
	}
	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = MultDigit(iValue);
	
	printf("Multiplication of all digits of the number is : %d", iRet);
	
	return 0;
}