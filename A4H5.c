//Write a program which accepts number from user and return difference between summation of all its factors and non factors.
//
// Input : 12
// Output :     Factor : 1+2+3+4+6 = 16          Non Factor : 5+7+8+9+10+11 = 50        Difference : 16-50 = -34
//
// Input : 10
// Output : -29  (8-37)

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iDiff = 0;
	int iSum1 = 0;
	int iSum2 = 0;
	
    for(iCnt = 1; iCnt<iNo; iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum1 = iSum1 + iCnt;
		}
		else
		{
			iSum2 = iSum2 + iCnt;
		}
		
		iDiff = iSum1 - iSum2;
	}
		return iDiff;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d", &iValue);
	
	iRet = FactDiff(iValue);
	
	printf("Difference between summation of all its factors and non factors is : \n");
	printf("%d\n",iRet);
	
	return 0;
}