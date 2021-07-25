//Accept number from user and check whether it is prime or not.
//
//Input : 7
//Output : Prime

// Input : 13
//Output : Prime

// Input : 12
// Output : Not Prime
                    

#include<stdio.h>
#include<stdbool.h>


bool CheckPrime(int iNo)
{
	int iCnt = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt =2;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt) == 0)
		{
			break;
		}
	}
	if(iCnt == (iNo/2)+1)
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
	
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	bRet = CheckPrime(iValue);
	if(bRet == true)
	{
		printf("Number is prime number\n",iValue);
	}	
	else
	 { 
	     printf("Number is not prime number\n",iValue);
	 }
	
	return 0;
}