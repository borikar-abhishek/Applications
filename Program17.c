//Accept number from user and check whether it is perfect or not
//
//Input : 6
//Output :  True(6) 1+2+3

// Input : 12
//Output : False (16) 1+2+3+4+6
                    

#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt =1;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}

    if(iNo == iSum)	
		return true;

	else
	    return false;
    
	
	
}


int main()
{
	int iValue = 0;
	bool bRet;
	
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("Number is perfect number\n",iValue);
	}	
	else(bRet == false)
	 { 
	     printf("Number is not perfect number\n",iValue);
	 }
	
	return 0;
}