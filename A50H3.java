/*
Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 5
Output : A A A A A
         B B B B B
         C C C C C
*/


import java.util.*;


class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i = 0,j = 0;
		char ch = 'A';
		for(i =1; i <= iRow; i++)
		{
			for(j = 1;j <= iCol; j++)
			{
				System.out.print(ch + "\t");
			}
			ch++;
			System.out.println();
		}
	}
}

class A50H3
{
	public static void main(String arg[])
	{	
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows :");
		int iRow = sobj.nextInt();
		System.out.println("Enter number of columns :");
		int iCol = sobj.nextInt();
		
		Pattern obj = new Pattern();
		obj.Pattern(iRow,iCol);
	}
}
