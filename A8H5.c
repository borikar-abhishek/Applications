//Write a program which accepts N and print first 5 multiples of N.
//Input : 4
//Output : 4 8 12 16 20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
	int iCnt = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	for(iCnt = 0;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iNo*(iCnt+1));
	}
}

int main()
{
	int iValue = 0 ;
	printf("Enter the number :\n");
	scanf("%d", &iValue);
	
	MultipleDisplay(iValue);
	
	return 0;
}