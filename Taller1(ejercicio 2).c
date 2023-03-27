#include<stdio.h>

int main()
{
    int i,n,j, cinco=0, tres=0;
    printf("\ningrese cuantos numeros quisiera evaluar");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       printf("ingrese un número: \n");
       scanf("%d",&j);
       
       int aux=0;
       do{
          aux=(j%10)+(aux*10);
            
          if((j%10)==5 || (j%10)==-5){
        
            cinco++;
            }
          if((j%10)==3 || (j%10)==-3){
        
            tres++;    
            }
            j=(j/10);
            
        }while(j!=0);  
        if(aux>99 || aux<-100){
        printf("su numero invertido es : %d\n",aux);
        }
    }
    printf("numero de cincos encontrados: %d \n numero de tres encontrados: %d", cinco,tres);      
}