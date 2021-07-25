//Write a recursive program which display below pattern.
//Output : A B C D E F

#include<stdio.h>

void Display()
{
	static int iCnt = 1;
	static char ch = 'A';
	
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