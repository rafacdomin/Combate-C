#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void move(char matrix[][6]){
    int i, j, x, y, aux, end, a, b, sum, s;
	char z, h;
	char p[5], pf[5];
	aux = 1; end = 1; sum = 0, s=0;
	system("cls");
	printf("\t\tO JOGO COMECOU!\n\n\n");
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if((matrix[i][j]=='K')||(matrix[i][j]=='R')||(matrix[i][j]==49)||(matrix[i][j]==50)||(matrix[i][j]==51)||(matrix[i][j]==57)){
				if(i==0){
					printf("%c\t",matrix[i][j]);
				}
				else{
					printf("?\t",matrix[i][j]);
				}
			}
			else{
				printf("%c\t",matrix[i][j]);
			}
		}
		printf("\n\n\n");
	}
	do{
		do{
		do{
			printf("\nPosicao da peca que deseja mover: ");
			scanf("%s",p);
			strcpy(p,strupr(p));
			troca2(&x, p[0]);
			y = p[1]- 48;
			if((matrix[x][y]=='E')||(matrix[x][y]=='S')||(matrix[x][y]=='C')||(matrix[x][y]=='M')){
				aux = 0;
			}
		}while(aux!=0);
		aux = 1;
		do{
			printf("Posicao Final: ");
			scanf("%s",pf);
			strcpy(pf,strupr(pf));
			troca2(&i, pf[0]);
			j = pf[1]- 48;
			if(matrix[x][y]=='S'){
				if((i==x)&&(j==y))
				    break;
				if((i==x+1)&&(j==y)){
					if(matrix[i][j]==' '){
						matrix[i][j]='S';
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
							case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
							case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
							case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
							case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
							case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'c' : matrix[x][y]=' '; aux = 0; break;
							case'm' : matrix[x][y]=' '; aux = 0; break;
							case'b' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
						}
					}
				}
				if((i==x+2)&&(j==y)){
					if(matrix[x+1][j]==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x+3)&&(j==y)){
					if((matrix[x+1][j]==' ')&&(matrix[x+2][j]==' ')){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x+4)&&(j==y)){
					if((matrix[x+1][j]==' ')&&(matrix[x+2][j]==' ')&&(matrix[x+3][j])==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y+1)){
					if(matrix[i][j]==' '){
						matrix[i][j]='S';
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
							case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
							case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
							case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
							case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
							case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'c' : matrix[x][y]=' '; aux = 0; break;
							case'm' : matrix[x][y]=' '; aux = 0; break;
							case'b' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
						}
					}
				}
				if((i==x)&&(j==y+2)){
					if(matrix[i][y+1]==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y+3)){
					if((matrix[i][y+1]==' ')&&(matrix[i][y+2]==' ')){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y+4)){
					if((matrix[i][y+1]==' ')&&(matrix[i][y+2]==' ')&&(matrix[x][y+3])==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x-1)&&(j==y)){
					if(matrix[i][j]==' '){
						matrix[i][j]='S';
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
							case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
							case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
							case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
							case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
							case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'c' : matrix[x][y]=' '; aux = 0; break;
							case'm' : matrix[x][y]=' '; aux = 0; break;
							case'b' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
						}
					}
				}
				if((i==x-2)&&(j==y)){
					if(matrix[x-1][j]==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x-3)&&(j==y)){
					if((matrix[x-1][j]==' ')&&(matrix[x-2][j]==' ')){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x-4)&&(j==y)){
					if((matrix[x-1][j]==' ')&&(matrix[x-2][j]==' ')&&(matrix[x-3][j])==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y-1)){
					if(matrix[i][j]==' '){
						matrix[i][j]='S';
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
							case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
							case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
							case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
							case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
							case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'c' : matrix[x][y]=' '; aux = 0; break;
							case'm' : matrix[x][y]=' '; aux = 0; break;
							case'b' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
						}
					}
				}
				if((i==x)&&(j==y-2)){
					if(matrix[i][y-1]==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y-3)){
					if((matrix[i][y-1]==' ')&&(matrix[i][y-2]==' ')){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y-4)){
					if((matrix[i][y-1]==' ')&&(matrix[i][y-2]==' ')&&(matrix[x][y-3])==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='S';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
								case 49 : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case 50 : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case 51 : matrix[i][j]='c'; matrix[x][y]=' '; aux = 0; break;
								case 57 : matrix[i][j]='m'; matrix[x][y]=' '; aux = 0; break;
								case'R' : matrix[i][j]='b'; matrix[x][y]=' '; aux = 0; break;
								case'K' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; end = 0; break;
								case'e' : matrix[i][j]='S'; matrix[x][y]=' '; aux = 0; break;
								case's' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
								case'c' : matrix[x][y]=' '; aux = 0; break;
								case'm' : matrix[x][y]=' '; aux = 0; break;
								case'b' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
			}
			else{
                if((i==x)&&(j==y))
				    break;
				if((i==x+1)&&(j==y)){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]= ' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 49: switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 50: switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 's'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 51: switch(matrix[x][y]){
										case 'C': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 57: switch(matrix[x][y]){
										case 'C': matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'R': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 'b'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= 'b'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'K': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; end=0; break;
							case 'e': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 's': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'c': switch(matrix[x][y]){
										case 'C': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'm': switch(matrix[x][y]){
										case 'C': matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'b': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[x][y]= ' '; break;
										}aux = 0; break;
						}
					}
				}
				if((i==x-1)&&(j==y)){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]= ' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 49: switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 50: switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 's'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 51: switch(matrix[x][y]){
										case 'C': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 57: switch(matrix[x][y]){
										case 'C': matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'R': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 'b'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= 'b'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'K': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; end=0; break;
							case 'e': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 's': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'c': switch(matrix[x][y]){
										case 'C': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'm': switch(matrix[x][y]){
										case 'C': matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'b': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[x][y]= ' '; break;
										}aux = 0; break;
						}
					}
				}
				if((i==x)&&(j==y+1)){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]= ' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 49: switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 50: switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 's'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 51: switch(matrix[x][y]){
										case 'C': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 57: switch(matrix[x][y]){
										case 'C': matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'R': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 'b'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= 'b'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'K': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; end=0; break;
							case 'e': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 's': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'c': switch(matrix[x][y]){
										case 'C': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'm': switch(matrix[x][y]){
										case 'C': matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'b': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[x][y]= ' '; break;
										}aux = 0; break;
						}
					}
				}
				if((i==x)&&(j==y-1)){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]= ' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 49: switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 50: switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 's'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 51: switch(matrix[x][y]){
										case 'C': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 57: switch(matrix[x][y]){
										case 'C': matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'R': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= 'b'; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= 'b'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'K': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; end=0; break;
							case 'e': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 's': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'c': switch(matrix[x][y]){
										case 'C': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'm': switch(matrix[x][y]){
										case 'C': matrix[x][y]= ' '; break;
										case 'E': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'M': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'b': switch(matrix[x][y]){
										case 'C': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'E': matrix[x][y]= ' '; break;
										case 'M': matrix[x][y]= ' '; break;
										}aux = 0; break;
						}
					}
				}
			}
		}while(aux==1);}while(aux==1);
		system("cls");
		aux=1;
		printf("\t\tO JOGO COMECOU!\n\n\n");
		for(i=0;i<6;i++){
			for(j=0;j<6;j++){
				if((matrix[i][j]=='K')||(matrix[i][j]=='R')||(matrix[i][j]==49)||(matrix[i][j]==50)||(matrix[i][j]==51)||(matrix[i][j]==57)){
					if(i==0){
						printf("%c\t",matrix[i][j]);
					}
					else{
						printf("?\t",matrix[i][j]);
					}
				}
				else{
					printf("%c\t",matrix[i][j]);
				}
			}
			printf("\n\n\n");
		}
			for(i=1;i<6;i++){
			for(j=1;j<6;j++){
				if((matrix[i][j]=='m')||(matrix[i][j]=='c')||(matrix[i][j]==49)||(matrix[i][j]==50)||(matrix[i][j]==51)||(matrix[i][j]==57)||(matrix[i][j]=='s')||(matrix[i][j]=='e')){
					s++;
				}
			}
		}
		sleep(2);
		if(s==0){
			end = 0;
		}
		else{
			s=0;
			mplay(&end, matrix);
	}

		for(i=1;i<6;i++){
			for(j=1;j<6;j++){
				if((matrix[i][j]=='M')||(matrix[i][j]=='C')||(matrix[i][j]=='S')||(matrix[i][j]=='E')){
					sum++;
				}
			}
		}
		if(sum==0){
			end = 2;
		}
		sum = 0;
	}while(end==1);
	system("cls");
	if(end==0)
	    printf("\n\n\n\t\t\tGAME OVER\n\n\t\t\t YOU WIN\n\n\n\n\n\n");
	if(end==2)
	    printf("\n\n\n\t\t\tGAME OVER\n\n\t\t\tYOU LOSE\n\n\n\n\n\n");
}
