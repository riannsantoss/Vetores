#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void identificarDivisivelPor3(int matriz[5][5]){
	
	int l;
	int j;
	
				
			for(l = 0; l < 5; l++ ){
				for(j = 0; j < 5; j++){
					if(matriz[l][j] % 3 == 0){
						printf("Numero divisivel por 3 encontrado na linha %d coluna %d\n e %d\n", l+1, j+1, matriz[l][j]);					
						}																	
					}					
				}
					
}



int main(int argc, char *argv[]) {
	
	
	int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};
                        
identificarDivisivelPor3(matriz);                    

	return 0;
}
