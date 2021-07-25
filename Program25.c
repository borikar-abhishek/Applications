// Accept number from user and return its reverse order
// Input : 7521
// Output : 1257
//Input : 4502
//Output : 2054
//Input : 7500
//Output : 57

#include<stdio.h>

int Reverse(int iNo)
{
	int iRev = 0;
	int iDigit = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo%10;
		iRev = (iRev*10) + iDigit;
		iNo = iNo/10;
		
	}
	return iRev;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	iRet = Reverse(iValue);
	
	printf("Reverse number is : %d",iRet);
	
	return 0;
}