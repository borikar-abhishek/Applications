/*
Write a program which accept matrix and one number from user and return
frequency of that number.

Input :  3 2 5 9
         4 3 2 2
         8 4 1 5
         3 9 7 5
Number : 9
Output : 9
*/


import java.util.*;


class Matrix
{
	
	public int Frequency(int Arr[][], int iNo)
	{
		int i = 0,j = 0,iCnt = 0;
	
		for(i = 0; i < Arr.length; i++)
		{
			for(j = 0; j < Arr[i].length;j++)
			{
				if(Arr[i][j]==iNo)
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
}

class A51H2
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
		
		System.out.println("Enter the number to search :");
		int iNo = sobj.nextInt();
		
		Matrix mobj = new Matrix();
		
		int ret = mobj.Frequency(Arr,iNo);
		System.out.println("Frequency of number is : "+ret);
		
	}
}
