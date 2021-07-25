/*
Write a java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4
Output : 1 2 3 4 5
         1 2     5
         1   3   5
         1     4 5
         1 2 3 4 5
*/

import java.util.*;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i =0, j= 0;
		for(i = 1; i<=iRow;i++)
		{
			for(j = 1; j<=iCol;j++)
			{
				if((i==1)||(j==1)||(i==iRow)||(j==iCol)||(i==j))
				{
					System.out.print(j+"\t");
				}
				else
				{
					System.out.print(" "+"\t");
				}
			}
			System.out.println();
		}
	}
}

class A57H5
{
	public static void main(String arg[])
	{	
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number of rows :");
		int row = sobj.nextInt();
		System.out.println("Enter the number of columns :");
		int col = sobj.nextInt();
		
		Pattern pobj = new Pattern();
		
		pobj.Pattern(row,col);
		
	}
}
