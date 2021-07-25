//accept  input  from user and print pattern as shown below
//Input : 5 
//Output :A B C D E
//Input : 3 F 
//Output : A B C 

#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt = 0;
    char ch = '\0';
	printf("\n");
	for(iCnt = 1,ch = 'A';iCnt<=iNo;iCnt++,ch++)                    // Here both integer and character initilisation done in same for loop
	{
		printf("%c\t",ch);
	}
	printf("\n");
}
int main()
{
	unsigned int iValue = 0;
	
	printf("Enter the number :\n ");
	scanf("%u", &iValue);
    
	Pattern(iValue);
	
	return 0;
	
}