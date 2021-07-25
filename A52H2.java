/*
Write a program which accept matrix and reverse the contents of each row.
Input :
         3 2 5 9
         4 3 2 2
         8 4 1 9
         3 9 7 5
Output :
         9 5 2 3
         2 2 3 4
         9 1 4 8
         5 7 9 3
*/


import java.util.*;


class Matrix
{
	
	public void ReverseRow(int Arr[][], int iRow, int iCol)
	{
		int i = 0,j = 0;
		
		for(i = 0; i < iRow; i++)
		{
			int iStart = 0, iEnd = iCol-1;
				while(iStart < iEnd)
				{
					int temp = Arr[i][iStart];
					Arr[i][iStart] = Arr[i][iEnd];
				    Arr[i][iEnd] = temp;
				
				    iStart++;
				    iEnd--;
			    }
		}
		
		System.out.println("Reversed row matrix is :");
		for(i = 0; i < iRow; i++)
		{
			for(j = 0; j < iCol; j++)
			{
				System.out.print(Arr[i][j] + "\t");
			}
			System.out.println();
		}
	}
}

class A52H2
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
		
		mobj.ReverseRow(Arr,row,col);
			
	}
}