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
            for (int k = 0; k < tamanho; k++)
            {
            // É possível multilplicar
            int termo[i][j] = a[i][j+1] * b[i+1][j];
            multi[i][j] = termo[i][j] + termo[i][j];
            }
        }
    }
}