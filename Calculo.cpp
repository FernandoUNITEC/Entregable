#include <stdio.h>

int p(int n){
    int resultado = 1;
    int k = 0;
    
    k = 1;
    while( k <= n )  {
        resultado = resultado * k;
        k = k + 1;
    } 
    return resultado;
}

int pNr(int n, int r){    
    return p(n)/p(n-r);  //10! / 8! = (10 * 9) * ( 8!) / 8!       
}

int pAn(int a[], int n){
    int suma = 0;
    int producto = 1;
    int k;
    
    for(k=0; k<n; k++){
        suma+=a[k];
        producto*=p(a[k]);
    } 
    return p(suma)/producto;   
}

int main(){
    printf("######################################\n");
    printf("##   CALCULOS DE COMBINATORIA       ##\n");
    printf("######################################\n");
    printf("\n\n");
    
    printf("Betty ordena sus pulseras de %d formas    \n", p(3));
    printf("Veronica ordena sus pulseras de %d formas \n", p(10));
    
    printf("Betty ordena 2 de sus 3 anillos de %d formas  \n", pNr(3,2));                  
    printf("Veronica ordena 2 de sus 10 anillos de %d formas \n", pNr(10, 2));

    int relojs[3];
    relojs[0] = 2; relojs[1] = 1; 
    printf("Betty ordena sus relojes de %d formas  \n", pAn(relojs,2));                  
    
    int relojes[3];
    relojes[0] = 5; relojes[1] = 3; relojes[2] = 2;
    printf("Veronica ordena sus relojes de %d formas  \n", pAn(relojes,3));                  
    
    getchar();  // Espera a que el usuario presione Enter para continuar
    return 0;   
}
