//
//Input : 3 3
//Output :   
/*
         1 2 3 
		 * * *
		 1 2 3 
		  
*/

#include<stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
	int i=0,j=0;
	
	for(i = 1;i<=iRow;i++)
	{
		printf("\n");
		for(j = 1;j<=iCol;j++)                                    //For this pattern if number of row is even then print * else print the number(j)
		{
			if((i%2)==0)
			{
				printf("*\t");
			}
			else
			{
				printf("%d\t",j);
			}
		}
		printf("\n");
	}
}
int main()
{
	unsigned int iValue1 =0, iValue2= 0;
	
	printf("Enter number of rows\n");
	scanf("%d",&iValue1);
	printf("Enter number of columns\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	
	return 0;
}