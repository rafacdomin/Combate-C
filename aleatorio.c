#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void ale(){//atribuir peças aleatoriamente
	int i, j, aux, x = 7 , y = 7, f,cx1,cy1,cx2,cy2,mx,my,ex,ey,sx1,sy1,sx2,sy2,sx3,sy3,p = 1;
	char F = 'F',B='B',S='S',C='C',M='M',E='E';
	char matrix[6][6];
	char a[6];
	char b[6];
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
	srand((unsigned)time(NULL) );
	aux = 1 + ( rand() % 5 );
	matrix[3][aux] = 254;//Lago
	do{
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
	i=0;
	do{//bandeira e bombas
		f = 1 + ( rand() % 5 );
		if(f==aux){
			matrix[4][aux]= F;
			if(aux==5){
				matrix[5][aux]= B;
				matrix[4][aux-1]= B;
			}
			if(aux==1){
				matrix[5][aux]= B;
				matrix[4][aux+1]= B;
			}
			if((aux!=5)&&(aux!=1)){
				matrix[4][aux+1]= B;
				matrix[4][aux-1]= B;
			}
			i = 1;
			break;
		}
		if(f==1){
			matrix[5][1]= F;
			matrix[4][1]= B;
			matrix[5][2]= B;
			i = 1;
			break;
		}
		if(f==5){
			matrix[5][5]= F;
			matrix[5][4]= B;
			matrix[4][5]= B;
			i = 1;
			break;
		}
	}while(i == 0);
	i=0;
	do{//Espião
		ex = 4 + ( rand() % 2 );
		ey = 1 + ( rand() % 5 );
		if(matrix[ex][ey]==' '){
			matrix[ex][ey]= E;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Soldado1
		sx1 = 4 + ( rand() % 2 );
		sy1 = 1 + ( rand() % 5 );
		if(matrix[sx1][sy1]==' '){
			matrix[sx1][sy1]= S;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//soldado2
		sx2 = 4 + ( rand() % 2 );
		sy2 = 1 + ( rand() % 5 );
		if(matrix[sx2][sy2]==' '){
			matrix[sx2][sy2]= S;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Soldado3
		sx3 = 4 + ( rand() % 2 );
		sy3 = 1 + ( rand() % 5 );
		if(matrix[sx3][sy3]==' '){
			matrix[sx3][sy3]= S;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Cabo Armeiro 1
		cx1 = 4 + ( rand() % 2 );
		cy1 = 1 + ( rand() % 5 );
		if(matrix[cx1][cy1]==' '){
			matrix[cx1][cy1]= C;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Cabo Armeiro 2
		cx2 = 4 + ( rand() % 2 );
		cy2 = 1 + ( rand() % 5 );
		if(matrix[cx2][cy2]==' '){
			matrix[cx2][cy2]= C;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Marechal
		mx = 4 + ( rand() % 2 );
		my = 1 + ( rand() % 5 );
		if(matrix[mx][my]==' '){
			matrix[mx][my]= M;
			i=1;
		}
	}while(i==0);
	for(i=0;i<6;i++){//imprime matriz
		for(j=0;j<6;j++){
			printf("%c\t",matrix[i][j]);
		}
		printf("\n\n\n");
	}
	printf("1 - Redistribuir \n2 - Prosseguir \n\n");
	scanf("%d",&p);
	}while(p==1);
	machine(&aux, matrix);
}
