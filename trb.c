#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
int main(){
	int sn;
	char matrix[6][6];
	printf("\n\t\tBem Vindo(a) ao jogo Combate!\n\n");
	Regras();
	printf("\n\n\t1 - INSERIR PECAS ALEATORIAMENTE\n\t2 - INSERIR PECAS MANUALMENTE\n\t3 - DEBUG\n\n");
	do{
		scanf("%d",&sn);
		if(sn==3){
			printf("\n\n\n");
			debug();
			break;
		}
		if(sn==1){
			printf("\n\n\n");
			ale();
			break;
		}
		if(sn==2){
			printf("\n\n\n");
			pos();
			break;
		}
	}while((sn!=1)||(sn!=2)||(sn!=3));
	printf("\n\t\t1 - JOGAR NOVAMENTE\n\t\t2 - SAIR\n\n\n\n\n\n");
	scanf("%d",&sn);
	if(sn==1){
		system("cls");
	    system("COMBATE.exe");
	}
	else
	    exit(0);
	system("pause");
	return 0;
}


