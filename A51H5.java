/*
Write a program which accept matrix and swap the contents of consecutive rows.
Input :  3 2 5 9
         4 3 2 2
         8 4 1 9
         3 9 7 5
		 
Output : 4 3 2 2
         3 2 5 9
         3 9 7 5
         8 4 1 9
*/


import java.util.*;


class Matrix
{
	
	public void SwapRows(int Arr[][], int iRow, int iCol)
	{
		int i = 0,j = 0;
		for(i=0; i<iRow; i++)
		{
			for(j=0;j<iCol;j++)
			{
				int temp = Arr[i][j];
				Arr[i][j] = Arr[i+1][j];
				Arr[i+1][j] = temp;
				System.out.print(Arr[i][j] + "\t");
			}
			i = i + 1;
			System.out.println();
		}
	}
		
}

class A51H5
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
		
		mobj.SwapRows(Arr,row,col);
			
	}
}