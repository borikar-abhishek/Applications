//
//Input : 4  4
//Output :   
/*
        1 $ $ $                 1,1      1,2     1,3    1,4
		1 2 $ $                 2,1      2,2     2,3    2,4
        1 2 3 $                 3,1      3,2     3,3    3,4
        1 2 3 4		            4,1      4,2     4,3    4,4
*/    

#include<stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		return;
	}
	
	for(i = 1;i<=iRow;i++)
	{
		printf("\n");
		for(j = 1;j<=iCol;j++)                                   
		{
			if(i==j || i>j)          // this can also be written as if(i>=j)                                             
			{
				printf("%d\t",j);
			}
			else
			{
				printf("$\t");
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