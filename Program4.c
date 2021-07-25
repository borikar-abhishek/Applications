
//Accept number from user and display all the number till that number .
// Example 1. Input : 8
//            Output : 1 2 3 4 5 6 7 8
// Example 2. Input : -6
//            Output : 1 2 3 4 5 6

/*
 START
       Accept one number as no 
	   If number is negative then covert it into positive
	   Create one counter as Cnt and set it to 1
	   
	   Itterate till the counter is less than or equal to the number
	   print the value of counter on screen
	   Increment the value of counter by 1
	   continue // from line 14

STOP 
*/

#include<stdio.h>

// If to write prototype then:    void Display(int);
// Meaning of "void"
// Display function accepts one parameter as integer and return nothing
// void Display(void)
// void Display()
// Display is a function which accepts nothing and return nothing

   void Display(int iNo)                           // for example take no 5
	{
		int iCnt = 0;
		if(iNo ==0) // Input filter
		{
			return;
		}
		
		if(iNo < 0)  // Input Updater
		{	
	     iNo = -iNo; 
		}
		                                           //1 2 3 4 5
		                                           //START       1
		                                           //END         5
		                                           //DIFFERENCE  1
		
	/*
      printf("1");
      printf("2");
      printf("3");
      printf("4");
      printf("5");
	  
	  for(iCnt = 1; iCnt<=iNo; iCnt++)
	  {
        printf("%d\n",iCnt);
	  }		  
	
    */
	// Step   1 Intialisation
	//        2 Condition
	//        3 Increment or decrement factor
	//        4 Loop body
	
	//        1         2          3
	   for(iCnt = 1; iCnt<=iNo; iCnt++)
	  {
        printf("%d\n",iCnt);     //4
	  }	
	 //  1  (2 4 3) (2 4 3) (2 4 3) (2 4 3) (2 4 3)  2  STOP 
	 // 
	 //Output : 1     2        3       4      5   
	}
int main()   //Entry point function
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}