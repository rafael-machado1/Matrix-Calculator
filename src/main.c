#include <stdio.h>

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

	while(1)
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

		scanf("%s",&operacao);

		switch(operacao)
		{
		    case '+':
					
				break;
			case '-':
					
				break;
			case '*':
					
				break;
			case '/':
					
				break;
			default:
				printf("Digite uma operação válida!\n");
				break;
		}





	}

}