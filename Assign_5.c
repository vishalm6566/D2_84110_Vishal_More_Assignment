///////////////////////////////////////////////////////////////////////////////////////////
//
//Q5.  Write a program to check the input characters for uppercase, lowercase, number of 
//digits and other characters. Display appropriate message.
//
///////////////////////////////////////////////////////////////////////////////////////////


# include<stdio.h>
#include <stddef.h>

void checkChar(char ch)
{
	if(ch>='A' && ch<='Z')
		printf("Uppercase Character\n");
	else if(ch>='a' && ch<='z')
		printf("Lowercase Character\n");
	else if(ch>='0' && ch<='9')
		printf("Character is Digit\n");
	else
		printf("Special Character\n");
}

int main()
{
    char ch;
	printf("Enter a Character : ");
	scanf("%c",&ch);

	checkChar(ch);
    return 0;
}