////////////////////////////////////////////////////////////////////////
//
// Q3. Write a program to calculate Fibonacci Series up to n numbers 
//
///////////////////////////////////////////////////////////////////////

# include<stdio.h>

void fibonacciSeries(int num)
{
    int a, b, c;

    a = -1;
    b = 1;
    printf("Fibonacci Series : ");
    while(num--)
    {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}



int main()
{
    int n;
    printf("Enter number to print fibonacci series : ");
	scanf("%d",&n);

    fibonacciSeries(n);

    return 0;
}