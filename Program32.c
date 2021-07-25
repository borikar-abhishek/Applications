//Accept number from user and find the smallest digit in it.
//Input : 7562
//Output : 2
//Input : 101
//Output : 0


#include<stdio.h>

int MinDigit(int iNo)
{
	int iDigit = 0,iMin = 9;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit<iMin)
		{
		 iMin = iDigit;
		 if(iMin == 0)                                                      // Time complexity is used 
		 {
			 break;
		 }
		}
		iNo = iNo/10;
	}
	return iMin;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter the number :\n");
	scanf("%d", &iValue);
	
	iRet = MinDigit(iValue);
	
	printf("Smallest digit is : %d\n",iRet);
	
	return 0;
}