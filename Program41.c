//accept two input  from user and print pattern as shown below
//Input : 5 A
//Output :A A A A A
//Input : 3 F 
//Output : F F F =

#include<stdio.h>
void Pattern(int iNo, char ch)
{
	int iCnt = 0;
	printf("\n");
	for(iCnt = 1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}
int main()
{
	unsigned int iValue = 0;
	char cValue = '\0';
	
	printf("Enter the number :\n ");
	scanf("%u", &iValue);
	printf("Enter Character :\n");
	scanf(" %c",&cValue);                         // leave space befor %c
	
	Pattern(iValue, cValue);
	
	return 0;
	
}