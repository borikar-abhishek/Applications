//Accept number from user and display its table
//
//Input : 4
//Output : 4 8 12 16 20 24 28 32 36 40

// INput: 5
//Output : 5 10 15 20 25 30 35 40 45 50 

#include<stdio.h>

void DisplayTable(int iNo)
{      
int iCnt =0;
if(iNo<0)
{
	iNo = -iNo;
}
	for(iCnt =1;iCnt<=10;iCnt++)
	{
		  printf("%d\n",iNo*iCnt);                                                               //iNo = iNo*i;
		                                                                                         //printf("Table is = %d\n",iNo);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number= \n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	return 0;
	
	
}