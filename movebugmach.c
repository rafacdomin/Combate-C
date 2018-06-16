#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void movebugmach(char matrix[][6]){
    int i, j, x, y, aux, end, a, b, sum, s;
	char z, h;
	char p[5], pf[5];
	aux = 1; end = 1; sum = 0, s=0;
	system("cls");
	printf("\t\tO JOGO COMECOU!\n\n\n");
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if((matrix[i][j]=='f')||(matrix[i][j]=='b')||(matrix[i][j]=='e')||(matrix[i][j]=='s')||(matrix[i][j]=='c')||(matrix[i][j]=='m')){
				if(i==0){
					printf("%c\t",matrix[i][j]);
				}
				else{
					printf("%c\t",matrix[i][j]);
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
			printf("\n\tTURNO INIMIGO:\n");
			printf("\nPosicao da peca que deseja mover: ");
			scanf("%s",p);
			strcpy(p,strupr(p));
			troca2(&x, p[0]);
			y = p[1]- 48;
			if((matrix[x][y]=='e')||(matrix[x][y]=='s')||(matrix[x][y]=='c')||(matrix[x][y]=='m')){
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
			if(matrix[x][y]=='s'){
				if((i==x)&&(j==y))
				    break;
				if((i==x+1)&&(j==y)){
					if(matrix[i][j]==' '){
						matrix[i][j]='s';
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again\n");
						}
					}
				}
				if((i==x+2)&&(j==y)){
					if(matrix[x+1][j]==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x+3)&&(j==y)){
					if((matrix[x+1][j]==' ')&&(matrix[x+2][j]==' ')){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x+4)&&(j==y)){
					if((matrix[x+1][j]==' ')&&(matrix[x+2][j]==' ')&&(matrix[x+3][j])==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y+1)){
					if(matrix[i][j]==' '){
						matrix[i][j]='s';
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
						}
					}
				}
				if((i==x)&&(j==y+2)){
					if(matrix[i][y+1]==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y+3)){
					if((matrix[i][y+1]==' ')&&(matrix[i][y+2]==' ')){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y+4)){
					if((matrix[i][y+1]==' ')&&(matrix[i][y+2]==' ')&&(matrix[x][y+3])==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x-1)&&(j==y)){
					if(matrix[i][j]==' '){
						matrix[i][j]='s';
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
						}
					}
				}
				if((i==x-2)&&(j==y)){
					if(matrix[x-1][j]==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x-3)&&(j==y)){
					if((matrix[x-1][j]==' ')&&(matrix[x-2][j]==' ')){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x-4)&&(j==y)){
					if((matrix[x-1][j]==' ')&&(matrix[x-2][j]==' ')&&(matrix[x-3][j])==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y-1)){
					if(matrix[i][j]==' '){
						matrix[i][j]='s';
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
						}
					}
				}
				if((i==x)&&(j==y-2)){
					if(matrix[i][y-1]==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
								default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y-3)){
					if((matrix[i][y-1]==' ')&&(matrix[i][y-2]==' ')){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
							default : printf("Try again");
							}
						}
					}
				}
				if((i==x)&&(j==y-4)){
					if((matrix[i][y-1]==' ')&&(matrix[i][y-2]==' ')&&(matrix[x][y-3])==' '){
						if(matrix[i][j]==' '){
							matrix[i][j]='s';
							matrix[x][y]=' ';
							aux = 0;
						}
						else{
							switch(matrix[i][j]){
							case'F' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; end = 0; break;
							case'E' : matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case'S' : matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case'C' : matrix[x][y]=' '; aux = 0; break;
							case'M' : matrix[x][y]=' '; aux = 0; break;
							case'B' : matrix[x][y]=' '; aux = 0; break;
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
							case 'F': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; end=0; break;
							case 'E': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'S': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'C': switch(matrix[x][y]){
										case 'c': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'M': switch(matrix[x][y]){
										case 'c': matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'B': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[x][y]= ' '; break;
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
							case 'B': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'F': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; end=0; break;
							case 'E': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'S': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'C': switch(matrix[x][y]){
										case 'c': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'M': switch(matrix[x][y]){
										case 'c': matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
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
							case 'F': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; end=0; break;
							case 'E': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'S': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'C': switch(matrix[x][y]){
										case 'c': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'M': switch(matrix[x][y]){
										case 'c': matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'B': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[x][y]= ' '; break;
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
							case 'F': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; end=0; break;
							case 'E': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'S': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'C': switch(matrix[x][y]){
										case 'c': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'M': switch(matrix[x][y]){
										case 'c': matrix[x][y]= ' '; break;
										case 'e': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'm': matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'B': switch(matrix[x][y]){
										case 'c': matrix[i][j]= matrix[x][y]; matrix[x][y]= ' '; break;
										case 'e': matrix[x][y]= ' '; break;
										case 'm': matrix[x][y]= ' '; break;
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
}while(end==1);}
