//Write a program which accepts string from user and accept one character. Return index of last occurence of that character.
//Input : "Marvellous Multi OS"
//          "M"
//Output : 11

//Input : "Marvellous multi OS"
//         "W"
//Output : -1

//Input : "Marvellous multi OS"
//         "e"
//Output : 4


#include<stdio.h>

int LastChar(char str[],char ch)
{
	int iCnt = 0;
	if(str==NULL)
	{
		return -1;
	}
	
	while(*str!='\0')
	{
	   str++;
	   iCnt++;
	}
	while(iCnt>0)
	{
		if(*str==ch)
		{
			break;
		}
		str--;
		iCnt--;
	}
	if(*str==0)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
	
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
	
	iRet = LastChar(Arr,cValue);
	printf("Character location is  : %d",iRet);
	
	return 0;
}