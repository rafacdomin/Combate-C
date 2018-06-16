#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void machine(int *a, char matrix[][6]){//peças maquina
	int i, j,aux, x = 7 , y = 7, f,cx1,cy1,cx2,cy2,mx,my,ex,ey,sx1,sy1,sx2,sy2,sx3,sy3,p = 1;
	char F = 'K',B ='R',S =50 ,C=51 ,M =57 ,E= 49;
	aux = *a;
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
	matrix[3][aux] = 254;//Lago
	for(i=3;i>0;i--){//posições disponiveis para preencher
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
			matrix[2][aux]= F;
			if(aux==5){
				matrix[1][aux]= B;
				matrix[2][aux-1]= B;
			}
			if(aux==1){
				matrix[1][aux]= B;
				matrix[2][aux+1]= B;
			}
			if((aux!=5)&&(aux!=1)){
				matrix[2][aux+1]= B;
				matrix[2][aux-1]= B;
			}
			i = 1;
			break;
		}
		if(f==1){
			matrix[1][1]= F;
			matrix[2][1]= B;
			matrix[1][2]= B;
			i = 1;
			break;
		}
		if(f==5){
			matrix[1][5]= F;
			matrix[1][4]= B;
			matrix[2][5]= B;
			i = 1;
			break;
		}
	}while(i == 0);
	i=0;
	do{//Espião
		ex = 1 + ( rand() % 2 );
		ey = 1 + ( rand() % 5 );
		if(matrix[ex][ey]==' '){
			matrix[ex][ey]= E;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Soldado1
		sx1 = 1 + ( rand() % 2 );
		sy1 = 1 + ( rand() % 5 );
		if(matrix[sx1][sy1]==' '){
			matrix[sx1][sy1]= S;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//soldado2
		sx2 = 1 + ( rand() % 2 );
		sy2 = 1 + ( rand() % 5 );
		if(matrix[sx2][sy2]==' '){
			matrix[sx2][sy2]= S;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Soldado3
		sx3 = 1 + ( rand() % 2 );
		sy3 = 1 + ( rand() % 5 );
		if(matrix[sx3][sy3]==' '){
			matrix[sx3][sy3]= S;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Cabo Armeiro 1
		cx1 = 1 + ( rand() % 2 );
		cy1 = 1 + ( rand() % 5 );
		if(matrix[cx1][cy1]==' '){
			matrix[cx1][cy1]= C;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Cabo Armeiro 2
		cx2 = 1 + ( rand() % 2 );
		cy2 = 1 + ( rand() % 5 );
		if(matrix[cx2][cy2]==' '){
			matrix[cx2][cy2]= C;
			i=1;
		}
	}while(i==0);
	i=0;
	do{//Marechal
		mx = 1 + ( rand() % 2 );
		my = 1 + ( rand() % 5 );
		if(matrix[mx][my]==' '){
			matrix[mx][my]= M;
			i=1;
		}
	}while(i==0);
	for(j=1;j<6;j++){
		if(matrix[3][j]!= matrix[3][aux]){
			matrix[3][j]= ' ';
		}
	}
	move(matrix);
}
