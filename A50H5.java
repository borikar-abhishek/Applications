/*
Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 4
Output : 1  2  3  4
         5  6  7  8
         9  10 11 12
*/


import java.util.*;


class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i = 0,j = 0,iValue = 1;
		for(i =1; i <= iRow; i++)
		{
			for(j = 1;j <= iCol; j++)
			{
				System.out.print(iValue + "\t");
				iValue++;
			}
			System.out.println();
		}
	}
}

class A50H5
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
