//Write a program which accepts string from user and accept one character. Check whether that character is present in string or not.
//Input : "Marvellous Multi OS"
//          "M"
//Output : 2

//Input : "Marvellous multi OS"
//         "W"
//Output : 0


#include<stdio.h>


int CountChar(char str[],char ch)
{	
int iCnt = 0;
	while(*str!='\0')
	{
		if(*str == ch)
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
	char cValue = '\0';
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the character you want to search :\n");
	scanf(" %c", &cValue);
	
	iRet = CountChar(Arr,cValue);
	printf("Character frequency is : %d",iRet);
	
	return 0;
}