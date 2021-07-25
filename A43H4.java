/*
Write a java program which accept string from user and check whether it contains vowels in it or not.

Input : "marvellous"
Output : TRUE
Input : "Demo"
Output : TRUE
Input : "xyz"
Output : FALSE
*/


import java.util.*;


class StringDemo
{
	public boolean ChkVowel(String str)
	{
		int i = 0;
		char arr[] = str.toCharArray();
		for(i =0; i<arr.length; i++)
		{
			if((arr[i]=='a') || (arr[i]=='e') || (arr[i]=='i') || (arr[i]=='o') || (arr[i]=='u') || (arr[i]=='A') || (arr[i]=='E') || (arr[i]=='I') || (arr[i]=='O') || (arr[i]=='U'))
			{
				break;
			}
			
		}
		if(i<arr.length)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class A43H4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string");
		String str = sobj.nextLine();
		StringDemo obj = new StringDemo();
		boolean bRet = obj.ChkVowel(str);
		if(bRet == true)
		{
			System.out.println("Vowel is present in string");
		}
		else
		{
			System.out.println("Vowel is not present in string");
		}
	}
}
