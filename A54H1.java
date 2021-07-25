/*
Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 3
Output : * * *
         * * *
         * * *
         * * *
*/

import java.util.*;

class Pattern
{
	public void Pattern(int iRow,int iCol)
	{
		int i =0, j = 0;
		for(i = 1;i<=iRow;i++)
		{
			for(j = 1;j<=iCol;j++)
			{
				System.out.print('*'+"\t");
			}
			System.out.println();
		}
		
	}
}

class A54H1
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
