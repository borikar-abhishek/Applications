//Write a program which accepts string from user and accept one character. Check whether that character is present in string or not.
//Input : "Marvellous Multi OS"
//          "e"
//Output : TRUE

//Input : "Marvellous multi OS"
//         "W"
//Output : FASLE


#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char str[],char ch)
{	
	while(*str!='\0')
	{
		if(*str == ch)
		{
			break;
		}
		str++;
	}	
		if(*str==ch)
		{
			return true;
		}
		else
		{
			return false;
		}
}

int main()
{
	char Arr[40];
	bool bRet;
	char cValue = '\0';
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the character you want to search :\n");
	scanf(" %c", &cValue);
	
	bRet = ChkChar(Arr,cValue);

	if(bRet == true)
	{
		printf("Character is present");
	}
	else
	{
		printf("Character is not present");
	}
	
	return 0;
}