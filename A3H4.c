//Accept one character from user and convert case of that character.
//
//Input : a       Output : A 
//Input : D       Output : d

/*
START
      Accept one character from user
	  
	  If that character is ranging from Char =97 to Char = 122  (A = 97 to Z = 122)
	  then subtract that character value by 32 to get its lower case 
	  
	  else if that character is ranging from Char =65 to Char = 90  (a = 65 to z = 90)
	  then add that character value by 32 to get its Upper case
	 
      LowerChar = 	lowerChar + 32 
	  UpperChar =   upperChar - 32
	 
STOP
*/
      
#include<stdio.h>


char DisplayConvert(char cChar)
{
	if(cChar>=97 && cChar<=122)
	{
		printf("%c" ,cChar-32);
	}
	else if(cChar>=65 && cChar<=90)
	{
	    printf("%c" , cChar+32);
	}
	return cChar;
}

int main()
{
	char cValue = '\0';
	printf("Enter any character\n");
	scanf("%c", &cValue);
	
	DisplayConvert(cValue);
		
	return 0;
}