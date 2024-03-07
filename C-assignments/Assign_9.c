///////////////////////////////////////////////////////////////////////////////
//
// Q9. Accept an integer number and when the program is executed print the 
//   binary, octal and hexadecimal equivalent of the given number.
//
//////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

int decimalToBinary(int decimalNum)
{
	int binaryNum = 0, i = 1, remainder;

	while (decimalNum != 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * i;
        i *= 10;
    }
	return binaryNum;
}


int main()
{
	int n, binary;
	
	printf("Enter an Integer : ");
	scanf("%d",&n);
	
	binary = decimalToBinary(n);
	
	printf("Binary Equivalent : %d\n",binary);
	printf("Octal Equivalent : %o\n",n);
	printf("Hexadecimal Equivalent : %x\n",n);
	
	return 0;
}
