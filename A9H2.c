//Write a program which accept range from user and display all even numbers in between that range.
//Input :        23 35
//Output :   24  26  28  30  32  34 
//Input :       10 18
//Output :  10  12  14  16  18
//Input :  -10 2
//Output :  -10 -8  -6  -4  -2  0  2 

#include<stdio.h>

void RangeDisplayEven(int iNo1, int iNo2)
{
	if(iNo1>iNo2)
	{
		printf("Invalid Range");
	}
	for(iNo1; iNo1<=iNo2; iNo1++)
	{
		if((iNo1%2)==0)
	    {
		  printf("%d\t",iNo1);
		}
	}
}	


int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter the starting point :\n");
	scanf("%d",&iValue1);
	printf("Enter the ending point :\n");
	scanf("%d",&iValue2);
	
	RangeDisplayEven(iValue1,iValue2);
	
	return 0;
}