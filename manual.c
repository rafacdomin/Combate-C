#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void pos(){//atribuir peças manualmente
	int i, j, aux, x = 7 , y = 7;
	const int p = 2;
	char matrix[6][6];
	char BA[2],BO1[2],BO2[2],ES[2],SO1[2],SO2[2],SO3[2],CA1[2],CA2[2],MA[2];
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
	aux = 1 + ( rand() % 5 );
	matrix[3][aux] = 254;//Lago
	for(i=1;i<3;i++){//peças da maquina
		for(j=1;j<6;j++){
			matrix[i][j] = '?';
		}
	}
	for(i=3;i<6;i++){//posições disponiveis para preencher
		if(i==3){
			for(j=1;j<6;j++){
				if(matrix[i][j]!=matrix[3][aux]){
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
	printf("indique as posicoes de cada peca:\n\n");
	do{
		printf("\nBandeira(F):");//indica posição bandeira
		scanf("%s",BA);
		printf("\n\n");
		troca(&x,&y,BA);
		matrix[x][y]= 'F';
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	x = 7;
	y = 7;
	do{
		printf("\nBomba(B):");//indica posição da bomba
		scanf("%s",BO1);
		printf("\n\n");
		if(strcmp(BO1,BA)!=0)
			troca(&x,&y,BO1);
		if(matrix[x][y]==' '){
			matrix[x][y]='B';
		}
		else{
			x = 7; y=7;
		}
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	x = 7;
	y = 7;
	do{
		printf("\nBomba(B):");
		scanf("%s",BO2);
		printf("\n\n");
		if((strcmp(BO2,BA)!=0)&&(strcmp(BO2,BO1)!=0))
			troca(&x,&y,BO2);
		if(matrix[x][y]==' '){
			matrix[x][y]='B';
		}
		else{
			x = 7; y=7;
		}
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	x = 7; y=7;
	do{
		printf("\nEspiao(E):");
		scanf("%s",ES);
		printf("\n\n");
		if((strcmp(ES,BA)!=0)&&(strcmp(ES,BO1)!=0)&&(strcmp(ES,BO2)!=0))
			troca(&x,&y,ES);
		if(matrix[x][y]==' '){
			matrix[x][y]='E';
		}
		else{
			x = 7; y=7;
		}
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	x =7;y=7;
	do{
		printf("\nSoldado(S):");
		scanf("%s",SO3);
		printf("\n\n");
		if((strcmp(SO3,BA)!=0)&&(strcmp(SO3,BO1)!=0)&&(strcmp(SO3,BO2)!=0)&&(strcmp(SO3,ES)!=0))
			troca(&x,&y,SO3);
		if(matrix[x][y]==' '){
			matrix[x][y]='S';
		}
		else{
			x = 7; y=7;
		}
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	x =7;y=7;
	do{
		printf("\nSoldado(S):");
		scanf("%s",SO1);
		printf("\n\n");
		if((strcmp(SO1,BA)!=0)&&(strcmp(SO1,BO1)!=0)&&(strcmp(SO1,BO2)!=0)&&(strcmp(SO1,ES)!=0)&&(strcmp(SO1,SO3)!=0))
			troca(&x,&y,SO1);
		if(matrix[x][y]==' '){
			matrix[x][y]='S';
		}
		else{
			x = 7; y=7;
		}
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	x =7;y=7;
	do{
		printf("\nSoldado(S):");
		scanf("%s",SO2);
		printf("\n\n");
		if((strcmp(SO2,BA)!=0)&&(strcmp(SO2,BO1)!=0)&&(strcmp(SO2,BO2)!=0)&&(strcmp(SO2,ES)!=0)&&(strcmp(SO2,SO3)!=0)&&(strcmp(SO2,SO1)!=0))
			troca(&x,&y,SO2);
		if(matrix[x][y]==' '){
			matrix[x][y]='S';
		}
		else{
			x = 7; y=7;
		}
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	x =7;y=7;
	do{
		printf("\nCabo Armeiro(C):");
		scanf("%s",CA1);
		printf("\n\n");
		if((strcmp(CA1,BA)!=0)&&(strcmp(CA1,BO1)!=0)&&(strcmp(CA1,BO2)!=0)&&(strcmp(CA1,ES)!=0)&&(strcmp(CA1,SO3)!=0)&&(strcmp(CA1,SO1)!=0)&&(strcmp(CA1,SO2)!=0))
			troca(&x,&y,CA1);
		if(matrix[x][y]==' '){
			matrix[x][y]='C';
		}
		else{
			x = 7; y=7;
		}
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	x =7;y=7;
	do{
		printf("\nCabo Armeiro(C):");
		scanf("%s",CA2);
		printf("\n\n");
		if((strcmp(CA2,BA)!=0)&&(strcmp(CA2,BO1)!=0)&&(strcmp(CA2,BO2)!=0)&&(strcmp(CA2,ES)!=0)&&(strcmp(CA2,SO3)!=0)&&(strcmp(CA2,SO1)!=0)&&(strcmp(CA2,SO2)!=0)&&(strcmp(CA2,CA1)!=0))
			troca(&x,&y,CA2);
		if(matrix[x][y]==' '){
			matrix[x][y]='C';
		}
		else{
			x = 7; y=7;
		}
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	x =7;y=7;
	do{		
		printf("\nMarechal(M):");
		scanf("%s",MA);
		printf("\n\n");
		if((strcmp(MA,BA)!=0)&&(strcmp(MA,BO1)!=0)&&(strcmp(MA,BO2)!=0)&&(strcmp(MA,ES)!=0)&&(strcmp(MA,SO3)!=0)&&(strcmp(MA,SO1)!=0)&&(strcmp(MA,SO2)!=0)&&(strcmp(MA,CA1)!=0)&&(strcmp(MA,CA2)!=0))
			troca(&x,&y,MA);
		if(matrix[x][y]==' '){
			matrix[x][y]='M';
		}
		else{
			x = 7; y=7;
		}
		for(i=0;i<6;i++){//imprime matriz
			for(j=0;j<6;j++){
				printf("%c\t",matrix[i][j]);
			}
			printf("\n\n\n");
		}
	}while((x>5)||(x<4)||(y>5)||(y<1));
	machine(&aux, matrix);
}
