//////////////////////////////////////////////////////////////////
//
// Q6. Write a program to perform matrix multiplication. 
//
//////////////////////////////////////////////////////////////////

# include <stdio.h>
# include <stdlib.h>


void inputMatrix(int mat[][3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n");
}

void matrixMultiplication(int mat1[][3], int mat2[][3], int ans[][3])
{
	int i,j,k,sum;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			sum = 0;
			for(k=0; k<3; k++)
			{
				sum = sum + mat1[i][k] * mat2[k][j];
			}
			ans[i][j] = sum;
		}
	}
}

void displayMatrix(int matrix[3][3])
{
	printf("Result : \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int matrix1[3][3], matrix2[3][3], result[3][3];

	printf("Enter 3x3 matrix-1 : \n");
	inputMatrix(matrix1);
	printf("Enter 3x3 matrix-2 : \n");
	inputMatrix(matrix2);

	matrixMultiplication(matrix1,matrix2,result);

	displayMatrix(result);
	
	return 0;
}


