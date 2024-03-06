////////////////////////////////////////////////////////////////////////////
//
//Q10. Read at most 10 names of students and store them into an array of 
//char nameOfStudents[10][50]. Sort the array and display them back. 
//Hint: Use qsort() method. 
//
///////////////////////////////////////////////////////////////////////////

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

void qSort(char arr[][50])
{
	int i,j;
	char newa[50];
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<10-i-1; j++)
		{
			if(strcmp(arr[j],arr[j+1])>0)
			{
				strcpy(newa, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], newa);
			}
		}
	}
}

int main()
{
	int i;
	char nameOfStudents[10][50];
	
	printf("Enter 10 names : ");
	for(i=0; i<10; i++)
	{
		fgets(nameOfStudents[i],50,stdin);
		nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
	}
	
	qSort(nameOfStudents);
	
	printf("Names of Student in Sorted Order : \n");
	for(i=0; i<10; i++)
		printf("%s ",nameOfStudents[i]);
		
	return 0;
}
