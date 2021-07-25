//Write a recursive program which accept string from user and count white spaces.
//Input : HE llo WOr lD
//Output : 3

#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt = 0, i = 0 ;
    if(*str!='\0')
	{
		if(str[iCnt]==' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	char arr[30];
	int iRet = 0;
	
	printf("Enter string :\n");
	scanf("%[^\n]s",arr);
	
	iRet = WhiteSpace(arr);
	printf("Count of white spaces are : %d",iRet);
	
	return 0;
}