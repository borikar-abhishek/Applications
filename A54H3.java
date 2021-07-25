/*
Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 5
Output : 5 4 3 2 1
         5 4 3 2 1
         5 4 3 2 1
*/

import java.util.*;

class Pattern
{
	public void Pattern(int iRow,int iCol)
	{
		int i =0, j = 0;
		
		for(i = 1;i<=iRow;i++)
		{
			int temp = iCol;
			for(j = 1;j<=iCol;j++,temp--)
			{
				System.out.print(temp+"\t");
			}
			System.out.println();
		}
		
	}
}

class A54H3
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
