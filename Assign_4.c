///////////////////////////////////////////////////////////////////////////
//
//Q4. Write a program to calculate the grade of a student. There are five 
//subjects. Marks in each subject are entered from keyboard. Assign grade 
//based on the following rule: 
//Total Marks >= 90   Grade: Ex 
//90 > Total Marks >= 80  Grade: A 
//80 > Total Marks >= 70  Grade: B 
//70 > Total Marks >= 60  Grade: C 
//60 > Total Marks    Grade: F
//
///////////////////////////////////////////////////////////////////////////

# include<stdio.h>

void displayGrad(int total)
{
	printf("%d out of 100", total);
	if(total >= 90)
		printf("Grade : Ex\n");
	else if(total>=80)
		printf("Grade : A\n");
	else if(total>=70)
		printf("Grade : B\n");
	else if(total>=60)
		printf("Grade : c\n");
	else
		printf("Grade : F\n");
}

void getMarks()
{
	int mark[5], i, total;
	printf("Enter marks of 5 subject (write marks out of 20): ");
	for(i=0,total=0; i<5; i++)
	{
		scanf("%d",&mark[i]);
		
		total += mark[i];
	}
	displayGrad(total);
}

int main()
{
    getMarks();
	
    return 0;
}