/*
Write a program which accept matrix from user and display transpose of the matrix.
The transpose of a given matrix is formed by interchanging the rows and columns of a matrix.
Input :
        3 2 5 9
        4 3 2 2
        8 4 1 5
        3 9 7 5
Output :
        3 4 8 3
        2 3 4 9
        5 2 1 7
        9 2 5 5
*/


import java.util.*;


class Matrix
{
	
	public void Transpose(int Arr[][], int iRow, int iCol)
	{
		int i = 0,j = 0;
		int Transpose[][] = new int[iRow][iCol];
		
		System.out.println("Transpose matrix is :");
		for(i = 0; i < iRow; i++)
		{
			for(j=0; j<iCol;j++)
			{
				Transpose[i][j] = Arr[j][i];
				System.out.print(Transpose[i][j] + "\t");
			}
			System.out.println();
		}	
	}
}

class A52H1
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
		
		mobj.Transpose(Arr,row,col);
			
	}
}