#include "../include/add.h"

// Para matrizes quadradas
// Caso não quadradas, definir qtd de linhas e qtd de colunas
void addMatrix(int tamanho, int a[tamanho][tamanho], int b[tamanho][tamanho], int sum[tamanho][tamanho])
{
	for (int i = 0; i < tamanho; i++)
	{
		for (int j = 0; j < tamanho; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];	
		}
	}
}