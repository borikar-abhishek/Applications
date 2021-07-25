/*
Write Java program which accept N numbers from user and display all such elements which are divisible by 3 and 5.

Input : N : 6
Elements : 85 66 3 15 93 88
Output : 15

*/


import java.util.*;


class ArrayDemo
{
	public void Display(int Arr[])
	{
		int i =0;
		for(i = 0; i<Arr.length; i++)
		{
			if(((Arr[i]%3)==0) && ((Arr[i]%5)==0))
			{
				System.out.print(+Arr[i]+" ");
			}
		}
	}
}

class A44H4
{
	public static void main(String arg[])
	{
		int iSize = 0, i = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter no. of elements :");
		iSize = sobj.nextInt();
		
		int arr[] = new int[iSize];
		System.out.println("Enter the elements : ");
		for(i = 0; i<iSize; i++)
		{
			arr[i] = sobj.nextInt();
		}
		ArrayDemo obj = new ArrayDemo();
		
	    obj.Display(arr);
		
		
	}
}
