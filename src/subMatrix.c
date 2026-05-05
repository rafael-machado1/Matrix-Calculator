#include "../include/sub.h"

void sub(int tamanho, int a[tamanho][tamanho], int b[tamanho][tamanho], int sub[tamanho][tamanho])
{
	for (int i = 0; i < tamanho; i++)
	{
		for (int j = 0; j < tamanho; j++)
		{
			sub[i][j] = a[i][j] - b[i][j];	
		}
	}
}