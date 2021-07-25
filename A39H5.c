//Write a recursive program which accept number from user and return its reverse number.
//Input : 523
//Output : 325

#include<stdio.h>

int Reverse(int iNo)
{
	static int iDigit = 0, iRev = 0;
	if(iNo>0)
	{
		iDigit = iNo%10;
		iRev = (iRev*10)+iDigit;
		iNo = iNo/10;
		Reverse(iNo);
	}
	return iRev;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = Reverse(iValue);
	printf("Reverse number is : %d",iRet);
	
	return 0;
}