#include "../include/scan.h"

void scanMatrix(int tamanho, int a[tamanho][tamanho])
{
    for (int i = 0; i < tamanho; i++)
    {
		for (int j = 0; j < tamanho; j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
}