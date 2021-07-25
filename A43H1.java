/*
Write a Java program which accept string from user and count number of capital characters.

Input : "Marvellous Multi OS"
Output : 4

*/


import java.util.*;


class StringDemo
{
	public int CountCapital(String str)
	{
		char arr[] = str.toCharArray();
		int iCnt = 0;
		for(int i = 0; i<arr.length; i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class A43H1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string");
		String str = sobj.nextLine();
		StringDemo obj = new StringDemo();
		int iRet = obj.CountCapital(str);
		System.out.println("Number of capital letters are :"+iRet);
	}
}
