///////////////////////////////////////////////////////////////////////////
//
// Q2. Write a program to calculate a Factorial of a number. 
//
///////////////////////////////////////////////////////////////////////////

# include<stdio.h>

int factorialUsingRecurssion(int n)
{
	if(n==0)
		return 1;
	
	return n * factorialUsingRecurssion(n-1);
}

int factorial(int n)
{
    int result = 1, i;
 
    for (i = 2; i <= n; i++) {
        result *= i;
    }
 
    return result;
}

int main()
{
	int n;
	printf("program to calculate a Factorial of a number with recursion \nEnter Your Number : ");
	scanf("%d",&n);
	
	printf("Factorial of %d by using recursion is %d \n",n, factorialUsingRecurssion(n));
	
	printf("Factorial of %d without using recursion is %d ",n, factorial(n));
	
	return 0;
}