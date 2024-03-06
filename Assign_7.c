////////////////////////////////////////////////////////////////////////////// 
//
// Q7. Write a java program to accept a number from user using command line 
// argument and display its table. 
//
////////////////////////////////////////////////////////////////////////////// 


# include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[])
{
	int iNo = atoi(argv[1]);
	
	printf("\nTable of %d\n",iNo);
	
	for(int i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n",iNo,i,iNo*i);
	}
	
	return 0;
}

