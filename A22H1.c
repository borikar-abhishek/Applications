//Write a program which displays ASCII table.






#include<stdio.h>

void DisplayASCII()
{
	int i =0;
	printf("----------------------------------------------------------------\n");
	printf("ASCII Table\n");
	for(i=0;i<=128;i++)
	{
		printf("%c\t%d\t%o\t%x\n",i,i,i,i);
	}
	printf("---------------------------------------------------------------\n");
}

int main()
{
	DisplayASCII();
	return 0;
}