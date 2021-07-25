//Write a recursive program which accept string from user and count number of small characters.
//Input : HElloWOrlD
//Output : 5

#include<stdio.h>

int LowerCase(char *str)
{
	static int iCnt = 0;
	
	if(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
		LowerCase(str);
	}
	return iCnt;
}

int main()
{
	char arr[30];
	int iRet = 0;
	
	printf("Enter string : \n");
	scanf("%[^\n]s",arr);
	
	iRet = LowerCase(arr);
	printf("Small letters in string are : %d",iRet);
	
	return 0;
}