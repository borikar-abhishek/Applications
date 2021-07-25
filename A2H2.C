 
 //Accept one number from user and print that number on screen
 
 #include<stdio.h>
 
 void Display(int iNo)
 {
	 while(iNo > 10)
	 {
		 printf("%d\n", iNo);
		 iNo--;
	 }
 }
 
 int main()
 {
	 int iValue = 0;
	 printf("Enter the number = ");
	 scanf("%d", &iValue);
	 
	 Display(iValue);
	 return 0;
	 
 }
//OUTPUT : Enter the number = 15 
//         15
//         14
//         13
//         12
//         11