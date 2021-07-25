//Write a recursive program which display below pattern.
//Input : 6
//Output : a b c d e f

#include<stdio.h>

void Display(int iNo)
{
	static char ch = 'a';
	static int iCnt = 1;
	
	if(iCnt<=iNo)
	{
		printf("%c\t",ch);
		ch++;
		iCnt++;
		Display(iNo);
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}