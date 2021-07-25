//accept  input  from user and print pattern as shown below
//Input : 5 
//Output :A B C D E
//Input : 3 F 
//Output : A B C 

#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt = 0;
    char ch = 'A';
	printf("\n");
	for(iCnt = 1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",ch);
		ch++;
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