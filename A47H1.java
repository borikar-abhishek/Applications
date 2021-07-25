/*
Write a java program which accept number from user and return the count of even digits.

Input : 2395
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4


*/


import java.util.*;


class Digit
{
	public int CountEven(int iNo)
	{
		int iCnt = 0, iDigit = 0;
		
		while(iNo!=0)
		{
			iDigit = iNo%10;
			if((iDigit%2)==0)
			{
				iCnt++;
			}
			iNo = iNo/10;
		}
		return iCnt;
	}
}

class A47H1
{
	public static void main(String arg[])
	{
		int iValue = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number :");
		iValue = sobj.nextInt();
		
		Digit obj = new Digit();
		
	    int iRet =  obj.CountEven(iValue);
		System.out.println("Count of even digits are :"+iRet);
		
	}
}
