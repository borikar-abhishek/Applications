/*
Write a java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 6 iCol = 6
Output : * * * * * *
         * # # # * *
         * # # * $ *
         * # * $ $ *
         * * $ $ $ *
         * * * * * *
*/

import java.util.*;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i =0, j= 0;
		for(i = 1; i<=iRow;i++)
		{
			for(j = iCol; j>0;j--)
			{
				if((i==1)||(j==1)||(i==iRow)||(j==iCol)||(i==j))
				{
					System.out.print("*"+"\t");
				}
				else if(i<j)
				{
					System.out.print("#"+"\t");
				}
				else
				{
					System.out.print("$"+"\t");
				}
			}
			System.out.println();
		}
	}
}

class A57H4
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
