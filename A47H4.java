/*
Write a program which accept number from user and return multiplication of all digits.

Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864

*/


import java.util.*;


class Digit
{
	public int Multiplication(int iNo)
	{
		int iDigit = 0, iMult = 1;
		
		while(iNo!=0)
		{
			iDigit = iNo%10;
			if(iDigit==0)
			{
				iDigit = 1;
			}
			iMult = iMult * iDigit;
			iNo = iNo/10;
		}
		return iMult;
	}
}

class A47H4
{
	public static void main(String arg[])
	{
		int iValue = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number :");
		iValue = sobj.nextInt();
		
		Digit obj = new Digit();
		
	    int iRet =  obj.Multiplication(iValue);
		System.out.println("Multiplication of all digits are :"+iRet);
		
	}
}
