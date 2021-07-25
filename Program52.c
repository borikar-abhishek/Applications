//
//Input : 4  4
//Output :   
/*
        A                   1,1      1,2     1,3    1,4                   
		A  B                2,1      2,2     2,3    2,4
        A  B  C             3,1      3,2     3,3    3,4
        A  B  C  D 	        4,1      4,2     4,3    4,4
*/    

#include<stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
	int i=0,j=0;
	char ch = '\0';           //Not initializing ch by 'A' initialie with'\0'
	
	if(iRow!=iCol)
	{
		return;
	}
	
	for(i = 1;i<=iRow;i++)
	{
		printf("\n");
		for(j = 1, ch = 'A';j<=iCol;j++,ch++)           // And here initializie with A and ch++ in loop so that it will automatically start from A                            
		{
			if(i>=j)
			{
				printf("%c\t",ch);
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