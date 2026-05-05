#include <stdio.h>
#include <stdbool.h>
#include "addMatrix.c"
#include "subMatrix.c"
#include "MultiMatrix.c"
#include "DivMatrix.c"
#include "printMatrix.c"
#include "scanMatrix.c"

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
			int ordem;
			char operacao;

			printf("\n\n\nOrdem da matriz quadrada (NxN)\n> ");
			scanf("%d",&ordem);

			printf("\nDeseja fazer qual operação matemática?\n"
			"Para soma digite: +\n"
			"Para subtração digite: -\n"
			"Para multiplicação digite: *\n"
			"Para divisão digite: /\n"
			"> "
		);

        int matrixA[ordem][ordem];
        int matrixB[ordem][ordem];

		scanf(" %c", &operacao);

		switch(operacao)
		{
		    case '+':
            {
                int sum[ordem][ordem];

                scanMatrix(ordem, matrixA);
                printf("\n");
                scanMatrix(ordem, matrixB);

                addMatrix(ordem, matrixA, matrixB, sum);

                printf("\nA matriz resultante é:\n\n");
                printMatrix(ordem, sum);
                printf("\n\n");

                running = false;
				break;
            }

			case '-':
            {
                int sub[ordem][ordem];

                scanMatrix(ordem, matrixA);
                printf("\n");
                scanMatrix(ordem, matrixB);

                subMatrix(ordem, matrixA, matrixB, sub);

                printf("\nA matriz resultante é:\n\n");
                printMatrix(ordem, sub);
                printf("\n\n");

                running = false;
				break;
            }

			case '*':
            {


                running = false;
				break;
            }

			case '/':
            {
    
                int div[ordem][ordem];

                scanMatrix(ordem, matrixA);
                printf("\n");
                scanMatrix(ordem, matrixB);

                // Se tiver divisão por 0, quebra tudo
                divMatrix(ordem, matrixA, matrixB, div);

                printf("\nA matriz resultante é:\n\n");
                printMatrix(ordem, div);
                printf("\n\n");

                running = false;
				break;
            }

			default:
				printf("Digite uma operação válida!\n");
                running = false;
				break;
		}

        break;



	}

}