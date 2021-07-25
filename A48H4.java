/*
Write java program which accept N numbers from user and accept Range, Display all elements from that range

Input : N : 6
        Start: 60
        End : 90
        Elements : 85 66 3 76 93 88
Output : 85 66 76 88

Input : N : 6
        Start: 30
        End : 50
        Elements : 85 66 3 76 93 88
Output :

*/


import java.util.*;


class Number
{
	public void Display(int Arr[],int iStart, int iEnd)
	{
		int i = 0;
		for(i=0; i<Arr.length; i++)
		{
			if((Arr[i]>=iStart)&&(Arr[i]<=iEnd))
			{
				System.out.print(+Arr[i] + " ");
			}
		}
	}
}

class A48H4
{
	public static void main(String arg[])
	{
		int iValue1 = 0, iValue2 = 0, i = 0, iSize = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of elements :");
		iSize = sobj.nextInt();
		
		int arr[] = new int[iSize];
		System.out.println("Enter the elements");
		for(i = 0; i<iSize; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		System.out.println("Enter starting point");
		iValue1 = sobj.nextInt();
		System.out.println("Enter ending point");
		iValue2 = sobj.nextInt();
		
		
		Number obj = new Number();
		
	    obj.Display(arr,iValue1,iValue2);
	}
}
