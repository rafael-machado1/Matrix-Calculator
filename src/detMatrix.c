#include "../include/determinant.h"

// Apenas até matrizes 3x3
int detMatrix(int tamanho, int a[tamanho][tamanho])
{
    if (tamanho == 1)
    {
        return a[0][0];
    }
    else if (tamanho == 2)
    {
        return a[0][0] * a[1][1] - a[1][0] * a[0][1];
    }
    else if (tamanho == 3)
    {
        // Regra de Sarrus
        int det = 0;
        for (int i = 0; i < tamanho; i++)
        {
            det += a[0][i] * a[1][(i + 1) % 3] * a[2][(i + 2) % 3];
            det -= a[0][(i + 2) % 3] * a[1][(i + 1) % 3] * a[2][i];
        }

        return det;
    }
}