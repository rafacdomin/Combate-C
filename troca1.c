#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void troca(int *a, int *b, char p[]){//Troca a posição indicada pela linha e coluna correspondente
	if(strcmp(p,"D1")==0){
		*a = 4;
		*b = 1;
	}
	if(strcmp(p,"D2")==0){
		*a = 4;   
	
		*b = 2;
	}
	if(strcmp(p,"D3")==0){
		*a = 4;
		*b = 3;
	}
	if(strcmp(p,"D4")==0){
		*a = 4;
		*b = 4;
	}
	if(strcmp(p,"D5")==0){
		*a = 4;
		*b = 5;
	}
	if(strcmp(p,"E1")==0){
		*a = 5;
		*b = 1;
	}
	if(strcmp(p,"E2")==0){
		*a = 5;
		*b = 2;
	}
	if(strcmp(p,"E3")==0){
		*a = 5;
		*b = 3;
	}
	if(strcmp(p,"E4")==0){
		*a = 5;
		*b = 4;
	}
	if(strcmp(p,"E5")==0){
		*a = 5;
		*b = 5;
	}
	if(strcmp(p,"d1")==0){
		*a = 4;
		*b = 1;
	}
	if(strcmp(p,"d2")==0){
		*a = 4;
		*b = 2;                   
	}                            
	if(strcmp(p,"d3")==0){       
		*a = 4;
		*b = 3;
	}
	if(strcmp(p,"d4")==0){
		*a = 4;
		*b = 4;
	}
	if(strcmp(p,"d5")==0){
		*a = 4;
		*b = 5;
	}
	if(strcmp(p,"e1")==0){
		*a = 5;
		*b = 1;
	}
	if(strcmp(p,"e2")==0){
		*a = 5;
		*b = 2;
	}
	if(strcmp(p,"e3")==0){
		*a = 5;
		*b = 3;
	}
	if(strcmp(p,"e4")==0){
		*a = 5;
		*b = 4;
	}
	if(strcmp(p,"e5")==0){
		*a = 5;
		*b = 5;
	}
}
