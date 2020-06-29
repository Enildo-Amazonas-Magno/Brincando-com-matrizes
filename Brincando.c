#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define tam 3

int main() {
    int v[tam][tam], i, soma=0, M=-99999, media=0, d, j;
    for(i=0;i<tam;i++)for(j=0;j<tam;j++){
        scanf("%d", &v[i][j]);if(v[i][j]>M)M=v[i][j];if(i==j)soma=soma+v[i][j];media=media+v[i][j];
    }
    if(M>0)d=1;else if(M==0)d=0;else if(M<0)d=-1;
    
    printf(" %.2lf %d %d %d", media/9.0 , M, d, soma);
	return 0;
}