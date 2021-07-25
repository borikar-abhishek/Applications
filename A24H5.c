//Write a program which accepts string from user and count number of white spaces.
//Input : "MarvellouS"
//Output : 0
//Input : "Marvellous Infosystems"
//Output : 1
//Input : "Marvellous Infosystem Logic Building"
//Output : 4

#include<stdio.h>
int CountWhite(char *str)
{
	int iCnt = 0;
	
	if(str == NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[40];
	int iRet = 0;
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	iRet = CountWhite(Arr);
	printf("White spaces are : %d",iRet);
	return 0;
}