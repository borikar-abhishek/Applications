// Accept division of student from user and depends on the division display exam timing. There are 4 divisons in school as A,B,C,D. 
//Exam of division A at 7 A.M,  B at 8.30 A.M,  C at 9.20 A.M,  D at 10.30 A.M . (Application should be case insensitive)
//Input : C
//Output : Your exam is at 9.20 A.M 
//Input : d 
//Output : Your exam is at 10.30 A.M

#include<stdio.h>

void DispalySchedule(char ch)
{
	if((ch=='A')||(ch =='a'))
	{
		printf("Your exam is at 7 A.M");
	}
	else if((ch == 'B')||(ch == 'b'))
	{
		printf("Your exam is at 8:30 A.M");
	}
	else if((ch == 'C')||(ch == 'c'))
	{
		printf("Your exam is at 9:20 A.M");
	}
	else if((ch == 'D')||(ch == 'd'))
	{
		printf("Your exam is at 10:30 A.M");
	}
}
int main()
{
	char cValue = '\0';
	printf("Enter your division:\n");
	scanf("%c",&cValue);
	
	DispalySchedule(cValue);
	
	return 0;
}