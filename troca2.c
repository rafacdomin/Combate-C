#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "estrutura.h"
void troca2(int *a, char p){
	if(p == 'A')
		*a = 1;
	if(p == 'B')
		*a = 2;
	if(p == 'C')
		*a = 3;
	if(p == 'D')
		*a = 4;
	if(p == 'E')
		*a = 5;
}
