#include <stdio.h>
#include <stdbool.h>
#include "addMatrix.c"
#include "subMatrix.c"
#include "multiMatrix.c"
#include "divMatrix.c"
#include "printMatrix.c"
#include "scanMatrix.c"
#include "detMatrix.c"

int main()
{

	/**
 *       _____          __         .__         
 *      /     \ _____ _/  |________|__|__  ___ 
 *     /  \ /  \\__  \\   __\_  __ \  \  \/  / 
 *    /    Y    \/ __ \|  |  |  | \/  |>    <  
 *    \____|__  (____  /__|  |__|  |__/__/\_ \ 
 *            \/     \/                     \/ 
 *    _________        .__                     
 *    \_   ___ \_____  |  |   ____             
 *    /    \  \/\__  \ |  | _/ ___\            
 *    \     \____/ __ \|  |_\  \___            
 *     \______  (____  /____/\___  >           
 *            \/     \/          \/            
 */

    bool running = true;

	while(running)
	{   
        int escolha;
		int ordem;
        char continuar;

        printf("\n\nBem-vindo à Calculadora de Matrizes!\n\n");
        printf("Deseja saber o determinante de uma matriz ou realizar cálculos entre duas matrizes?\n"
            "Digite (0) para a primeira opção ou\n"
            "Digite (1) para a segunda opção\n> "
        );
        scanf("%d",&escolha);

        printf("\n\n\nOrdem da matriz quadrada (NxN)\n> ");
        scanf("%d",&ordem);
        
        // Cálculo das matrizes (cálculo dos determinantes na linha 200)
        if(escolha)
        {
            char operacao;
            scanf(" %c", &operacao);

            if(operacao)
            {
                printf("\nDeseja fazer qual operação matemática?\n"
                    "Para soma digite: +\n"
                    "Para subtração digite: -\n"
                    "Para multiplicação digite: *\n"
                    "Para divisão digite: /\n"
                    "> "
                );

                // É necessário guardar as matrizes na memória para usá-las depois
                int matrixA[ordem][ordem];
                int matrixB[ordem][ordem];


                switch(operacao)
                {
                    case '+':
                    {
                        // Gerar na memória a matriz resultante
                        int sum[ordem][ordem];

                        printf("\nMatriz A:\n");
                        scanMatrix(ordem, matrixA);

                        printf("\nMatriz B:\n");
                        scanMatrix(ordem, matrixB);

                        addMatrix(ordem, matrixA, matrixB, sum);

                        printf("\nA matriz resultante é:\n\n");
                        printMatrix(ordem, sum);
                        printf("\n\n");

                        printf("Deseja continuar?(y/n)\n>");
                        scanf(" %c", &continuar);

                        if (continuar == 'y')
                        {
                            running = true;
                        } 
                        else
                        {
                            running = false;
                        }
                        
                        break;
                    }

                    case '-':
                    {
                        // Gerar na memória a matriz resultante
                        int sub[ordem][ordem];

                        printf("\nMatriz A:\n");
                        scanMatrix(ordem, matrixA);

                        printf("\nMatriz B:\n");
                        scanMatrix(ordem, matrixB);

                        subMatrix(ordem, matrixA, matrixB, sub);

                        printf("\nA matriz resultante é:\n\n");
                        printMatrix(ordem, sub);
                        printf("\n\n");

                        printf("Deseja continuar?(y/n)\n>");
                        scanf(" %c", &continuar);

                        if (continuar == 'y')
                        {
                            running = true;
                        } 
                        else
                        {
                            running = false;
                        }
                    }

                    case '*':
                    {
                        int multi[ordem][ordem];

                        printf("\nMatriz A:\n");
                        scanMatrix(ordem, matrixA);

                        printf("\nMatriz B:\n");
                        scanMatrix(ordem, matrixB);

                        multiMatrix(ordem, matrixA, matrixB, multi);

                        printf("\nA matriz resultante é:\n\n");
                        printMatrix(ordem, multi);
                        printf("\n\n");

                        printf("Deseja continuar?(y/n)\n>");
                        scanf(" %c", &continuar);

                        if (continuar == 'y')
                        {
                            running = true;
                        } 
                        else
                        {
                            running = false;
                        }
                    }

                    case '/':
                    {
                        // Gerar na memória a matriz resultante
                        int div[ordem][ordem];

                        printf("\nMatriz A:\n");
                        scanMatrix(ordem, matrixA);

                        printf("\nMatriz B:\n");
                        scanMatrix(ordem, matrixB);

                        // Se tiver divisão por 0, quebra tudo
                        divMatrix(ordem, matrixA, matrixB, div);

                        printf("\nA matriz resultante é:\n\n");
                        printMatrix(ordem, div);
                        printf("\n\n");

                        printf("Deseja continuar?(y/n)\n>");
                        scanf(" %c", &continuar);

                        if (continuar == 'y')
                        {
                            running = true;
                        } 
                        else
                        {
                            running = false;
                        }
                    }

                    default:
                        printf("Digite uma operação válida!\n");
                        running = false;
                        break;
                }
            }
        }
        // Cálculo do determinante
        else
        {
            int det;

            printf("\nMatriz A:\n");
            scanMatrix(ordem, matrixA);
            detMatrix(ordem, matrixA, det);
            printf("\ndet(A) = %d\n\n", det);

            printf("Deseja continuar?(y/n)\n>");
            scanf(" %c", &continuar);
                    
            if (continuar == 'y')
            {
                running = true;
            } 
            else
            {
                running = false;
            }
        }  
        }
    }
}