/*
Write a java program which accept string from user and count number of small characters.

Input : "Marvellous"
Output : 9
*/


import java.util.*;


class StringDemo
{
	public int CountSmall(String str)
	{
		char arr[] = str.toCharArray();
		int iCnt = 0;
		for(int i = 0; i<arr.length; i++)
		{
			if((arr[i]>='a') && (arr[i]<='z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class A43H2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string");
		String str = sobj.nextLine();
		StringDemo obj = new StringDemo();
		int iRet = obj.CountSmall(str);
		System.out.println("Number of small letters are :"+iRet);
	}
}
