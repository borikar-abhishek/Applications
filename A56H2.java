/*
Write Java program which accept String from user and display below pattern.

Input : Hello
Output : H e l l o
         H e l l *
         H e l * *
         H e * * *
         H * * * *
*/

import java.util.*;

class Pattern
{
	public void Pattern(String str)
	{
		char arr[] = str.toCharArray();
		int i = 0, j = 0;
		System.out.println();
		
		for(i=arr.length; i>0; i--)
		{
			for(j=0;j<arr.length;j++)
			{
				if(i>j)
				{
					System.out.print(arr[j]+"\t");
				}
				else
				{
					System.out.print("*"+"\t");
				}
			}
			System.out.println();
		}
		
		
	}
}

class A56H2
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
