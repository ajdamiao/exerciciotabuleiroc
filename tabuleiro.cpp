#include <stdio.h>

int main()
{
	
	int matriz[8][8];    //Declara a matriz para o tabuleiro
	int peca[7] = {0};        //Matriz para contar a quantidade de peças usadas.
	int opcao;          //Usada no switch para saber qual peça irá ser colocada
	
	//Declarando cada peça no tabuleiro inicial
	for(int i = 0; i<8; i++)
	{
		for(int j = 0; j<8; j++)
		{
			printf("0 - Vazio | 1 - Peao | 2 - Cavalo | 3 - torres | \n");
			printf("4 - Bispos | 5 - Reis | 6 - Rainhas \n\n");
			printf("Qual peca voce deseja colocar no tabuleiro? ");
			scanf("%d", &opcao);
			
			switch(opcao)
			{
				case 0:
					peca[0] = peca[0]+1;
					matriz[i][j] = 0;
				break;
				
				case 2:
					peca[1] = peca[1]+1;
					matriz[i][j] = 2;
				break;
				
				case 4:
					peca[2] = peca[2]+1;
					matriz[i][j] = 4;
				break;
				
				case 1:
					peca[3] = peca[3]+1;
					matriz[i][j] = 1;
				break;
				
				case 3:
					peca[4] = peca[4]+1;
					matriz[i][j] = 3;
				break;
				
				case 6:
					peca[5] = peca[5]+1;
					matriz[i][j] = 6;
				break;
				
				case 5:
					peca[6] = peca[6]+1;
					matriz[i][j] = 5;
				break;
				
				default:
					peca[0] = peca[0]+1;
					matriz[i][j] = 0;
				break;	
			}
			
		}

	}
	
	
	//Imprime o tabuleiro na tela
	for(int i =0; i<8; i++)
	{
		for(int j =0; j<8;j++)
		{
		printf(" | %d", matriz[i][j], " | " );			
		}
		printf(" |");
		printf("\n --------------------------------- \n");
	}

	//Saida com os nomes das pecas e quantidade no tabuleiro
	printf("\n Casas vazias   = %d\n", peca[0]);
	printf("Cavalos   = %d\n", peca[1]);
	printf("Bispos   = %d\n", peca[2]);
	printf("Peoes   = %d\n", peca[3]);
	printf("Torres   = %d\n", peca[4]);
	printf("Rainhas   = %d\n", peca[5]);
	printf("Reis   = %d\n", peca[6]);
	
}
