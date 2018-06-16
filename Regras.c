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
			fprintf(regras,"\t\t\t\t\tREGRAS\n\n\n* O jogador ganha a partida ao achar e capturar a bandeira inimiga.\n* Cada jogador move uma peça por turno. Ao atacar o oponente, as regras abaixo  determinarão o vencedor.\n* Para a maioria das peças, o maior numero ganha o ataque.\n* Quando ambas as peças tem o mesmo número, as duas perdem.\n\n\n\t\t\t\t\tPEÇAS\n\n10 - Marechal(M) = Peça mais forte, perde apenas caso seja atacada pelo Espião ou atacar uma bomba\n\n3 - Cabo Armeiro(C) = pode desarmar bombas\n\n2 - Soldado(S) = pode se mover a qualquer distância em uma linha reta\n\n1 - Espião(E) = Pode ganhar do Marechal(M), porém perde para qualquer ataque\n\nBomba(B) = Destroi qualquer peça exceto o Cabo Armeiro(C), não pode mover-se\n\nBandeira(F) = Jogador perde o jogo caso capturada, não pode mover-se\n\n\nATENÇÂO: FECHE ESTE ARQUIVO PARA CONTINUAR A EXECUÇÂO DO PROGRAMA!!\n\n");
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
