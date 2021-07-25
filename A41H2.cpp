//Write generic program to find largest number from three numbers.

#include<iostream>
using namespace std;


template<class T>
T Max(T no1, T no2, T no3)
{
	T Max = 0;
	if((no1>no2)&&(no1>no3))
	{
		Max = no1;
	}
	else if((no2>no1) && (no2>no3))
	{
		Max = no2;
	}
	else
	{
		Max = no3; 
	}
	return Max;
}

int main()
{
	int iValue1,iValue2,iValue3 = 0;
	int iRet = 0;
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	printf("Enter second number\n");
	scanf("%d",&iValue2);
	printf("Enter third number\n");
	scanf("%d",&iValue3);
	
	iRet = Max(iValue1,iValue2,iValue3);
	printf("Largest number is : %d",iRet);
	printf("\n");
	float fRet = Max(10.0f,20.0f,9.00f);
    printf("%f",fRet);
	
	
	return 0;
}