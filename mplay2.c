#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void mplay(int *end, char matrix[][6]){
	int i, j, x, y, aux, b, sum;
	char z;
	aux = 1; sum = 0;
	srand((unsigned)time(NULL) );
		do{do{
			x = 1 + ( rand() % 5 );
			y = 1 + ( rand() % 5 );
			if((matrix[x][y]=='e')||(matrix[x][y]=='s')||(matrix[x][y]=='c')||(matrix[x][y]=='m')||(matrix[x][y]==50)||(matrix[x][y]==49)||(matrix[x][y]==51)||(matrix[x][y]==57)){
				aux = 0;
			}
		}while(aux!=0);
		aux = 1;
		do{
			if((matrix[x][y]==50)||(matrix[x][y]=='s')){
				b = rand() % 12;
				if((b==0)&&(x!=5)){
				    i = x + 1;
				    j = y;
				}else{
				if((b==1)&&(y!=5)){
					i = x;
        	        j = y + 1;
				}else{
				if((b==2)&&(x!=1)){
                    i = x - 1;
				    j = y;
				}else{
				if((b==3)&&(y!=1)){
					i = x;
					j = y - 1;
				}else{
				if((b==4)&&(x>2)){
					i = x - 2;
					j = y;
				}else{
				if((b==5)&&(y>2)){
					i = x;
					j = y - 2;
				}else{
				if((b==6)&&(x<4)){
					i = x + 2;
					j = y;
				}else{
				if((b==7)&&(y<4)){
					i = x;
					j = y + 2;
				}else{
				if((b==8)&&(x>3)){
					i = x - 3;
					j = y;
				}else{
				if((b==9)&&(y>3)){
					i = x;
					j = y - 3;
				}else{
				if((b==10)&&(x<3)){
					i = x + 3;
					j = y;
				}else{
				if((b==11)&&(y<3)){
					i = x;
					j = y + 3;
				}}}}}}}}}}}}
			}
			else{
			do{
				b = rand() % 4;
				if((b==0)&&(x!=5)){
				    i = x + 1;
				    j = y;
				}else{
				if((b==1)&&(y!=5)){
					i = x;
        	        j = y + 1;
				}else{
				if((b==2)&&(x!=1)){
                    i = x - 1;
				    j = y;
				}else{
				if((b==3)&&(y!=1)){
					i = x;
					j = y - 1;
				}}}}
			}while((matrix[i][j]=='K')&&(matrix[i][j]=='R')&&(matrix[i][j]=='b')&&(matrix[i][j]=='1')&&(matrix[i][j]=='2')&&(matrix[i][j]=='3')&&(matrix[i][j]=='9')&&(matrix[i][j]=='c')&&(matrix[i][j]=='s')&&(matrix[i][j]=='m')&&(matrix[i][j]==294)&&(i==x)&&(j==y));
			}
			if((matrix[x][y]==50)||(matrix[x][y]=='s')){
				if(i==x+1){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if(i==x-1){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((i==x+2)&&(matrix[i-1][j]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((i==x-2)&&(matrix[i+1][j]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((i==x+3)&&(matrix[i-1][j]==' ')&&(matrix[i-2][j]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((i==x-3)&&(matrix[i+2][j]==' ')&&(matrix[i+1][j]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((i==x+4)&&(matrix[i-1][j]==' ')&&(matrix[i-2][j]==' ')&&(matrix[i-3][j]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((i==x-4)&&(matrix[i+1][j]==' ')&&(matrix[i+2][j]==' ')&&(matrix[i+3][j]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if(j==y+1){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if(j==y-1){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((j==y+2)&&(matrix[i][j-1]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((j==y-2)&&(matrix[i][j+1]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((j==y+3)&&(matrix[i][j-1]==' ')&&(matrix[i][j-2]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((j==y-3)&&(matrix[i][j+1]==' ')&&(matrix[i][j+2]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((j==y+4)&&(matrix[i][j-1]==' ')&&(matrix[i][j-2]==' ')&&(matrix[i][j-3]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
				if((j==y-4)&&(matrix[i][j+1]==' ')&&(matrix[i][j+2]==' ')&&(matrix[i][j+3]==' ')){
					if(matrix[i][j]==' '){
						matrix[i][j]=matrix[x][y];
						matrix[x][y]=' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; break;
							case 'S': matrix[i][j]=' '; matrix[x][y]=' '; aux = 0; break;
							case 'C': matrix[x][y]=' '; aux = 0; break;
							case 'B': matrix[x][y]=' '; aux = 0; break;
							case 'F': matrix[i][j]='s'; matrix[x][y]=' '; aux = 0; *end = 2; break;
						}
					}
				}
			}
			else{
				if(i==x+1){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]= ' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'S': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'C': switch(matrix[x][y]){
										case 51: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'M': switch(matrix[x][y]){
										case 51: matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= 'e'; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'B': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'F': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= 'e'; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; *end = 2; break;
						}
					}
				}
				if(i==x-1){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]= ' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'S': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'C': switch(matrix[x][y]){
										case 51: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'M': switch(matrix[x][y]){
										case 51: matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= 'e'; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'B': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'F': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= 'e'; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; *end = 2; break;
						}
					}
				}
				if(j==y+1){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]= ' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'S': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'C': switch(matrix[x][y]){
										case 51: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'M': switch(matrix[x][y]){
										case 51: matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= 'e'; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'B': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'F': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= 'e'; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; *end = 2; break;
						}
					}
				}
				if(j==y-1){
					if(matrix[i][j]==' '){
						matrix[i][j]= matrix[x][y];
						matrix[x][y]= ' ';
						aux = 0;
					}
					else{
						switch(matrix[i][j]){
							case 'E': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'S': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'C': switch(matrix[x][y]){
										case 51: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'M': switch(matrix[x][y]){
										case 51: matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= 'e'; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= ' '; matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'B': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[x][y]= ' '; break;
										case 57: matrix[x][y]= ' '; break;
										}aux = 0; break;
							case 'F': switch(matrix[x][y]){
										case 51: matrix[i][j]= 'c'; matrix[x][y]= ' '; break;
										case 49: matrix[i][j]= 'e'; matrix[x][y]= ' '; break;
										case 57: matrix[i][j]= 'm'; matrix[x][y]= ' '; break;
										}aux = 0; *end = 2; break;
						}
					}
				}
			}
			if(aux==1)
			    break;
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
}
