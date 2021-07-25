/*
Write a java program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user.
Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input : "Marvellous Infosystems"
        "Logic Building"
         5
Output : "Marvellous Infosystems Logic"

*/


import java.util.*;


class StringDemo
{
	public void StrNCatX(String src, String dest, int iNo)
	{
		int i =0;
		char arr[] = dest.toCharArray();
		char brr[];
		for(i = 0; i<iNo; i++)
		{
			brr[i] = brr[i] + arr[i] ;
		}
		System.out.println("String is :"+src+brr[i]);
	}
}

class A49H1
{
	public static void main(String arg[])
	{
		int iValue = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the first string");
		String str1 = sobj.nextLine();
		System.out.println("Enter the second string");
		String str2 = sobj.nextLine();
		
		System.out.println("Enter the number of characters to concat");
		iValue = sobj.nextInt();
		
		StringDemo obj = new StringDemo();
		obj.StrNCatX(str1,str2,iValue);
		
		
	}
}
