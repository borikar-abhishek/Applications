/*
Write Java program which accept String from user and display below pattern.

Input : Hello
Output : H e l l o
         H e l l o
         H e l l o
         H e l l o
*/

import java.util.*;

class Pattern
{
	public void Pattern(String str)
	{
		char arr[] = str.toCharArray();
		
		int i = 0, j = 0;
		System.out.println();
		for(i= 1; i<arr.length; i++)
		{
			for(j=0;j<arr.length;j++)
			{
				System.out.print(arr[j]);
			}
			System.out.println();
		}
		
	}
}

class A55H1
{
	public static void main(String arg[])
	{	
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the string :");
		String str = sobj.nextLine();
		
		Pattern pobj = new Pattern();
		
		pobj.Pattern(str);
		
	}
}
