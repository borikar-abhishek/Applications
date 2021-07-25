//Write a program which accepts number from user and display its factor in decreasing order.
//
//Input : 12
// Output : 6 4 3 2 1 
//
// Input : 13
// Output : 1
//
//Input : 10
//Output : 5 2 1

#include<stdio.h>

int FactRev(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iNo;iCnt<=iNo; iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
	}
}
int main()
{
	int iValue = 0;
	printf("Enter the number =\n");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	
	return 0;
}
