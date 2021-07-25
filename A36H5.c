//Write a recursive program which display below pattern.
//Output : a b c d e f

#include<stdio.h>

void Display()
{
	static int iCnt = 1;
	static char ch = 'a';
	
	if(iCnt<=6)
	{
		printf("%c\t",ch);
		ch++;
		iCnt++;
		Display();
	}
}

int main()
{
	Display();
	return 0;
}