//
//Input : 3 3
//Output :   
/*
                 * * *
		 * * *
		 * * *
*/

#include<stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
	 int i = 0, j = 0;
    printf("\n");
    //      1           2          3
    for(i = 1; i<= iRow; i++)           // 1
    {//         1       2           3
        for(j = 1; j<= iCol; j++)       //2
        {
            printf("*\t");     // 4 (Inner)
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