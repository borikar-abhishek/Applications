//accept number from user and print pattern as shown below
//Input : 5
//Output :* 5 *4 * 3 * 2 * 1
//Input : 9
//Output : * 9 * 8 * 7 * 6 * 5 *4 * 3 * 2 * 1

#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt = 0;
	printf("\n");
	for(iCnt =iNo;iCnt>=1;iCnt--)
	{
		printf("*\t%d\t", iCnt);
	}
	printf("\n");
}
int main()
{
	unsigned int iValue = 0;
	printf("Enter the number :\n ");
	scanf("%u", &iValue);
	
	Pattern(iValue);
	
	return 0;
	
}