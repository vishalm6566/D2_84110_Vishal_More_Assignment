////////////////////////////////////////////////////////////////////////////////
//
// Q12. Write a Program to reverse the letters present in the given String. 
//Do not use strrev() function.
//
////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>
# include <string.h>

void reverse(char arr[], int size)
{
	int i,j;
	char temp;
	
	for(i=0; i<size/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = temp;	
	}
}

int main()
{
	char str[50];
	printf("Enter a string : ");
	fgets(str,sizeof(str),stdin);

	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1] = '\0';
		
	reverse(str,strlen(str));
	
	printf("Reversed string : %s\n",str);
	
	return 0;
}
