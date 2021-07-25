//Accept number from user and check whether number is pallindrome number or not.
//Input : 121
//Output : 121
//Input : 5005
//Output : 5005

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
	int iDigit = 0,iRev = 0,iTemp = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	iTemp = iNo;
	
	while(iNo>0)
	{
		iDigit = iNo%10;
		iRev = (iRev*10) + iDigit;
		iNo = iNo/10;
		
	}
	if(iRev == iTemp )
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
	int iValue = 0;
	bool bRet;
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	bRet = CheckPallindrome(iValue);
	if(bRet == true)
	{
		printf("It is pallindrome");
	}
	else
	{
		printf("It is not pallindrome");
	}
	return 0;
}