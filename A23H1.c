//Write a program which accepts string from user and count number of capital characters.
//Input : "Marvellous Multi OS"
//Output : 4

#include<stdio.h>

int CountCapital(char str[])
{
	int iCnt = 0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[50];
	int iRet = 0;
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	iRet = CountCapital(Arr);
	printf("Number of capital letters are : %d",iRet);
	return 0;
}