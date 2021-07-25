//Write a recursive program which accept string from user and count number of characters.
//Input : Hello
//Output : 5

#include<stdio.h>

int Strlen(char arr[])
{
	static int iCnt = 0;
	if(arr[iCnt]=='\0')
	{
		return iCnt;
	}
	else
	{
		iCnt++;
		Strlen(arr);
	}
}

int main()
{
	
	int iRet = 0;
	char arr[20];
	printf("Enter string :\n");
	scanf("%[^\n]s",arr);
	
	iRet = Strlen(arr);
	printf("Number of character in string are : %d",iRet);
	
	return 0;
}