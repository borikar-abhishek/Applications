//Write a program which accepts one number and position from user and TOOGLE that bit. Return modified number

//Input       =           10    3
//Output      =           14
//Input       =           104   6  
//Output      =           72

/*     
                                                    
   iNo = 10  =   ‭                      0  0  0  0  1  0  1  0‬   
   iMask     =                         0  0  0  0  0  0  0  1    
   iMask = iMask<<(iPos-1) =  0  0  0  0  0  0  0  0  1  0  0 ‭‬   (^)  XOR operator
----------------------------------------------------------------------   ‭ 
   iResult                 =           0  0  0  0  1  1  1  0  =  14     
*/

#include<stdio.h>

 unsigned int ToggleBit(unsigned int iNo,int iPos)
{
	unsigned int iMask = 0X00000001;
	unsigned int iResult = 0;
	if((iPos<1)||(iPos>32))
	{
		return 0;
	}
	iMask = iMask<<(iPos-1);
	iResult = iNo ^ iMask;
	return iResult;
	
}

int main()
{
	
	unsigned int iValue = 0, iPos = 0;
	int iRet = 0;
	printf("Enter the number :\n");
	scanf("%u",&iValue);
	printf("Enter the position:\n");
	scanf("%d",&iPos);
	
	iRet = ToggleBit(iValue,iPos);
	printf("Modified number is : %d\n",iRet);
	return 0;
}