//
//Input : 4  4
//Output :   
/*
        1 * * *
		* 2 * * 
        * * 3 *
        * * * 4		
*/    

#include<stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)                   //Filter as this program is square pattern therefore number of rows and number of  column should be same. 
	{
		return;
	}
	
	for(i = 1;i<=iRow;i++)
	{
		printf("\n");
		for(j = 1;j<=iCol;j++)                                   
		{
			if(i==j)                                                         //Diagonal element if equal print i or j nothing matter,  else print *
			{
				printf("%d\t",j);
			}
			else
			{
				printf("*\t");
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