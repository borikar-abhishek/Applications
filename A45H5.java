/*
Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)

*/


import java.util.*;


class Digit
{
	public int CountDiff(int iNo)
	{
		int iDigit = 0, iSum1 = 0, iSum2 = 0;;
		
		while(iNo!=0)
		{
			iDigit = iNo%10;
			if(iDigit==0)
			{
				iDigit = 1;
			}
			if((iDigit%2)==0)
			{
				iSum1 = iSum1 + iDigit;
			}
			else if((iDigit%2)!=0)
			{
				iSum2 = iSum2 + iDigit;
			}
			iNo = iNo/10;
		}
		return iSum1-iSum2;
	}
}

class A45H5
{
	public static void main(String arg[])
	{
		int iValue = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number :");
		iValue = sobj.nextInt();
		
		Digit obj = new Digit();
		
	    int iRet =  obj.CountDiff(iValue);
		System.out.println("Difference is :"+iRet);
		
	}
}
