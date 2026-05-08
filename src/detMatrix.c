#include "../include/determinant.h"

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
    // else
    // {
    //     for (int i = 0; i < tamanho; i++)
    //     {
    //         for (int j = 0; j < tamanho; j++)
    //         {
    //             for (int k = 0; k < tamanho; k++)
    //             {
    //                 a[]                           
    //             }
    //         }
    //     }
    // }
}