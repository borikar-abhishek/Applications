//accept number from user and print (#*) that many times
//Input : 5
//Output : # * # * # * # * # *
//Input : 9
//Output : # * # * # * # * # *# * # * # * # * 

#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt = 0;
	printf("\n");
	for(iCnt =1;iCnt<=iNo;iCnt++)
	{
		printf("#\t*\t");
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