/*
Write a program which accept number from user and return the count of odd digits.

Input : 2395
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0


*/


import java.util.*;


class Digit
{
	public int CountOdd(int iNo)
	{
		int iCnt = 0, iDigit = 0;
		
		while(iNo!=0)
		{
			iDigit = iNo%10;
			if((iDigit%2)!=0)
			{
				iCnt++;
			}
			iNo = iNo/10;
		}
		return iCnt;
	}
}

class A47H2
{
	public static void main(String arg[])
	{
		int iValue = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number :");
		iValue = sobj.nextInt();
		
		Digit obj = new Digit();
		
	    int iRet =  obj.CountOdd(iValue);
		System.out.println("Count of odd digits are :"+iRet);
		
	}
}
