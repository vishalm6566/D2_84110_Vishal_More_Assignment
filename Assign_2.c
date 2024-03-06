///////////////////////////////////////////////////////////////////////////
//
// Q2. Write a program to calculate a Factorial of a number. 
//
///////////////////////////////////////////////////////////////////////////

# include<stdio.h>

int factorial(int n)
{
	if(n==0)
		return 1;
	
	return n * factorial(n-1);
}

int main()
{
	int n;
	printf("program to calculate a Factorial of a number \nEnter Your Number : ");
	scanf("%d",&n);
	
	printf("Factorial of %d is %d",n, factorial(n));
	
	return 0;
}