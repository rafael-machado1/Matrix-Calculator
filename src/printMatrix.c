#include "printMatrix.h"

void printMatrix(int a[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
		for (int j = 0; j < tamanho; j++)
		{
			int matrixA = a[i][j];
			printf("%d\t",matrixA);
		}

		printf("\n");

    }
}