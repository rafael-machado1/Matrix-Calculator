#include "../include/print.h"

void printMatrix(int tamanho, int a[tamanho][tamanho])
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