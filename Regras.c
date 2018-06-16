#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void Regras(){
	int resp;
	FILE *regras;
	printf("\n\n\t\t\t1 - NOVO JOGO\n\t\t\t2 - REGRAS\n\t\t\t3 - SAIR\n");
	do{scanf("%d",&resp);
		if(resp==2){
			regras = fopen("regras.txt","w");//cria um arquivo txt com o texto abaixo
			fprintf(regras,"\t\t\t\t\tREGRAS\n\n\n* O jogador ganha a partida ao achar e capturar a bandeira inimiga.\n* Cada jogador move uma pe�a por turno. Ao atacar o oponente, as regras abaixo  determinar�o o vencedor.\n* Para a maioria das pe�as, o maior numero ganha o ataque.\n* Quando ambas as pe�as tem o mesmo n�mero, as duas perdem.\n\n\n\t\t\t\t\tPE�AS\n\n10 - Marechal(M) = Pe�a mais forte, perde apenas caso seja atacada pelo Espi�o ou atacar uma bomba\n\n3 - Cabo Armeiro(C) = pode desarmar bombas\n\n2 - Soldado(S) = pode se mover a qualquer dist�ncia em uma linha reta\n\n1 - Espi�o(E) = Pode ganhar do Marechal(M), por�m perde para qualquer ataque\n\nBomba(B) = Destroi qualquer pe�a exceto o Cabo Armeiro(C), n�o pode mover-se\n\nBandeira(F) = Jogador perde o jogo caso capturada, n�o pode mover-se\n\n\nATEN��O: FECHE ESTE ARQUIVO PARA CONTINUAR A EXECU��O DO PROGRAMA!!\n\n");
			fclose(regras);
			system("regras.txt");//executa o arquivo txt para o usuario
			break;
		}
		if((resp!=1)&&(resp!=2)&&(resp!=3)){
			printf("Comando invalido, tente novamente\n");
		}
		if(resp==1)
			break;
		if(resp==3)
			exit(0);
	}while((resp!=1)||(resp!=2));
	system("cls");
}
