
//Accept one number from user if number is less than 10 print "Hello" otherwise print "Demo"

#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 10)
	{
		printf("HELLO");
	}
	else
	{
		printf("DEMO");
	}
}

  int main()
{
	int iValue = 0;
	printf("Enter the number = ");
	scanf("%d", &iValue);
	
	Display(iValue);
  
    return 0;
}
//OUTPUT : Enter the number = 9
//         HELLO
//       
//         Enter the number = 15
//         DEMO