#include "../include/div.h"

void divMatrix(int tamanho, int a[tamanho][tamanho], int b[tamanho][tamanho], int div[tamanho][tamanho])
{
	for (int i = 0; i < tamanho; i++)
	{
		for (int j = 0; j < tamanho; j++)
		{
            // Divisão por zero
            if (b[i][j] == 0)
            {
                printf("\n\nDivisão por zero!\n");
                return;
            }
            else
            {
                div[i][j] = a[i][j] / b[i][j];
            }
		}
	}
}