/*
Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4
Output : A B C D
         a b c d
         A B C D
         a b c d

*/

import java.util.*;

class Pattern
{
	public void Pattern(int iRow,int iCol)
	{
		int i =0, j = 0;
		char ch ;
		for(i =1; i <= iRow; i++)
		{
			if((i%2)!=0)
			{
				for(j = 1,ch = 'A';j <= iCol; j++,ch++)
				{
				   System.out.print(ch + "\t");
				}
			    System.out.println();
			}
			else if((i%2)==0)
			{
				for(j = 1,ch = 'a';j <= iCol; j++,ch++)
				{
				   System.out.print(ch + "\t");
				}
			    System.out.println();
			}
		}
	}
}

class A53H2
{
	public static void main(String arg[])
	{	
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows :");
		int row = sobj.nextInt();
		System.out.println("Enter number of columns :");
		int col = sobj.nextInt();
		
		Pattern pobj = new Pattern();
		
		pobj.Pattern(row,col);
		
	}
}
