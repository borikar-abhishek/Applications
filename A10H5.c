//Accept number from user and display below pattern
// Input : 5
// Output : # 1 * # 2 * # 3 * # 4 * # 5 *

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	printf("\n");
	for(iCnt = 1;iCnt<=iNo*2;iCnt++)
	{
		printf("%d\t",iCnt*2);
	}
	printf("\n");
}
int main()
{
	int iValue = 0;
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}