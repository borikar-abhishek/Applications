/*
Write a java program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input : "MarvellouS"
Output : 6 (8-2)
*/


import java.util.*;


class StringDemo
{
	public int CountDiff(String str)
	{
		char arr[] = str.toCharArray();
		int iCnt1 = 0, iCnt2 = 0;
		for(int i = 0; i<arr.length; i++)
		{
			if((arr[i]>='a') && (arr[i]<='z'))
			{
				iCnt1++;
			}
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				iCnt2++;
			}
			
		}
		return iCnt1-iCnt2;
	}
}

class A43H3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string");
		String str = sobj.nextLine();
		StringDemo obj = new StringDemo();
		int iRet = obj.CountDiff(str);
		System.out.println("Difference is :"+iRet);
	}
}
