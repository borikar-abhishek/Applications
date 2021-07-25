//Write a program which accept range from user and display all numbers in between that range in reverse order.
//Input :        23 35
//Output :  35 34 33 32 31 30 29 28 27 26 25 24 23 
//Input :       10 18
//Output :  18 17 16 15 14 13 12 11 10
//Input :  -10 2
//Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 

#include<stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{
	if(iNo1>iNo2)
	{
		printf("Invalid Range");
	}
	for(iNo2; iNo2>=iNo1; iNo2--)
	{
		printf("%d\t",iNo2);
	}
}	


int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter the starting point :\n");
	scanf("%d",&iValue1);
	printf("Enter the ending point :\n");
	scanf("%d",&iValue2);
	
	RangeDisplay(iValue1,iValue2);
	
	return 0;
}