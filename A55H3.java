/*
Write Java program which accept String from user and display below pattern.

Input : Hello
Output : H
         H e
         H e l
         H e l l
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
		for(i=0; i<arr.length; i++)
		{
			for(j=0;j<arr.length;j++)
			{
				if(i>=j)
				{
					System.out.print(arr[j]);
				}
			}
			System.out.println();
			
		}
		
	}
}

class A55H3
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