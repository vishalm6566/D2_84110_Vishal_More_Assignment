/*
Q1. Write a program to input n numbers on command line argument and 
calculate maximum of them. 
*/

# include<stdio.h>
# include<stdlib.h>


int main(int argc, char *argv[])
{
    int i, maxNum = 0;

    for(i=1; i<argc; i++)
    {
        if(atoi(argv[i]) > maxNum) 
            maxNum = atoi(argv[i]);
    }
    printf("Maximum number is %d\n",maxNum);
    return 0;
}