//Accept number from user and count even digits in that number
//Input : 8642
//Output : 4
//Input : 4521
//Output : 2
//Input : 7139
//Output : 0

#include<stdio.h>

int EvenDigits(int iNo)
{
	int iDigits=0,iCnt = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	if(iNo==0)
	{
		return 1;
	}
	while(iNo>0)
	{
		iDigits = iNo%10;
		 if((iDigits%2) == 0)
		 {
			 iCnt++;
		 }	
        iNo = iNo/10;		 
	}
	return iCnt;
}
int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter the number \n");
	scanf("%d\n", &iValue);
	
	iRet = EvenDigits(iValue);
	
	printf("Number of even digits are : %d",iRet);
	
	return 0;
}