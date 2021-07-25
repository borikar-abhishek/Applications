//Write a program which accepts string from user and count number of small characters.
//Input : "Marvellous "
//Output : 9

#include<stdio.h>

int CountSmall(char str[])
{
	int iCnt = 0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
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
	iRet = CountSmall(Arr);
	printf("Number of small letters are : %d",iRet);
	return 0;
}