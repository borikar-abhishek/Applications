/*
Write a program which accept matrix and return largest number from both the diagonals

Input : 3 2 5 9
        4 3 2 2
        8 4 1 9
        3 9 7 5
Output : 9


*/

import java.util.*;

class Matrix
{
	
	public void MaxDiagonal(int Arr[][])
	{
		int i = 0,j = 0, iMax = 0;
	
		for(i = 0; i < Arr.length; i++)
		{
			for(j = 0; j < Arr[i].length;j++)
			{
				if((i==j) && (Arr[i][j]>iMax))
				{
					iMax = Arr[i][j];
				}
			}
		}
		
		System.out.println("Maximum element in diagonal is : "+iMax);
	
		
	}
}

class A51H3
{
	public static void main(String arg[])
	{	
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows :");
		int row = sobj.nextInt();
		System.out.println("Enter number of columns :");
		int col = sobj.nextInt();
		
		int Arr[][] = new int[row][col];
		
		System.out.println("Enter the elements");
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j < Arr[i].length; j++)
			{
				Arr[i][j] = sobj.nextInt();
			}
		}
		
		System.out.println("Entered elements are");
		for(int i = 0; i < Arr.length; i++)                   
		{
			for(int j = 0; j < Arr[i].length; j++)              
			{
				System.out.print(Arr[i][j] + "\t");
			}
			System.out.println();
		}
		
		Matrix mobj = new Matrix();
		
		mobj.MaxDiagonal(Arr);
		
	}
}
