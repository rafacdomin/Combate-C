#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void debug(){
	int aux, i, j, x =7, y =7,n=0;
	char str[100],str2[100] ,lin,col,pc;
	char p[7];
	char p1[2];
	char p2[2];
	char p3[2];
	char matrix[6][6];
	char F = 'F',B='B',S='S',C='C',M='M',E='E';
	FILE *arq;
	matrix[0][0] = ' ';
	matrix[1][0] = 'A';
	matrix[2][0] = 'B';
	matrix[3][0] = 'C';
	matrix[4][0] = 'D';
	matrix[5][0] = 'E';
	matrix[0][1] = '1';
	matrix[0][2] = '2';
	matrix[0][3] = '3';
	matrix[0][4] = '4';
	matrix[0][5] = '5';
	srand( (unsigned)time(NULL) );
	n = 1 + ( rand() % 5 );
	matrix[3][n] = 254;//Lago
	for(i=1;i<6;i++){//posições disponiveis para preencher
		if(i==3){
			for(j=1;j<6;j++){
				if(matrix[i][j]!=matrix[3][n]){
					matrix[i][j]= '-';
				}
			}
		}
		else{
			for(j=1;j<6;j++){
				matrix[i][j]= ' ';
			}
		}
	}
	for(i=0;i<6;i++){//imprime matriz
		for(j=0;j<6;j++){
			printf("%c\t",matrix[i][j]);
		}
		printf("\n\n\n");
	}
	do{
		arq = fopen("aliados.txt","w");
		printf("Insira as posicoes das pecas do jogador em cada linha seguindo o exemplo:\nEX: \nB(D3)\nF(D2)\nS(D1)");
		printf("\n\naperte Enter para inserir as pecas.");
		getch();
		fclose(arq);
		system("aliados.txt");
		arq= fopen("aliados.txt","r");
		while(fgets(str,sizeof(str),arq)!=NULL){
			strcpy(str,strupr(str));
			lin = str[2];
			col = str[3];
			pc = str[0];
			troca2(&x,lin);
			y = col  - 48;
			if((matrix[x][y]==' ')&&(x>3)&&(x<6)&&(y>0)&&(y<6)){
				matrix[x][y]= pc;
				aux = 0;
			}
			else{
				printf("\nOcorreu um erro, tente novamente\n\n");
				aux = 1;
				remove("aliados.txt");
			}
		}
		fclose(arq);
	}while(aux!=0);
	for(i=0;i<6;i++){//imprime matriz
		for(j=0;j<6;j++){
			printf("%c\t",matrix[i][j]);
		}
		printf("\n\n\n");
	}
	do{
		arq = fopen("enemy.txt","w");
		printf("Insira as posicoes das pecas da maquina em cada linha seguindo o exemplo:\nEX: \nB(D3)\nF(D2)\nS(D1)");
		printf("\n\naperte ENTER para inserir as pecas.\n\n");
		getch();
		fclose(arq);
		system("enemy.txt");
		arq= fopen("enemy.txt","r");
		while(fgets(str,sizeof(str),arq)!=NULL){
            strcpy(str2,strupr(str));
			strcpy(str,strlwr(str));
			lin = str2[2];
			col = str[3];
			pc = str[0];
			troca2(&x,lin);
			y = col  - 48;
			if((matrix[x][y]==' ')&&(x>0)&&(x<3)&&(y>0)&&(y<6)){
				matrix[x][y]= pc;
				aux = 0;
			}
			else{
				printf("\nOcorreu um erro, tente novamente\n\n");
				aux = 1;
				remove("enemy.txt");
			}
		}
		fclose(arq);
	}while(aux!=0);
	for(i=0;i<6;i++){//imprime matriz
		for(j=0;j<6;j++){
   			matrix[3][j]=' ';
			matrix[3][0]= 'C';
			matrix[3][n] = 254;
			printf("%c\t",matrix[i][j]);
		}
		printf("\n\n\n");
	}
	movebug(matrix);
}
