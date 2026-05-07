#include "../include/multi.h"

// O uso de matrizes quadradas evita a verificação se é possível a multiplicação ou não
// Tenha em mente que Matriz A * Matriz B != Matriz B * Matriz A
// j = i => multiplica e soma com a próxima
//
void multiMatrix(int tamanho, int a[tamanho][tamanho], int b[tamanho][tamanho], int multi[tamanho][tamanho])
{
    for(int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {

            multi[i][j] = 0;

            for (int k = 0; k < tamanho; k++)
            {
                multi[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}