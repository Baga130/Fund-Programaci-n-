#include<stdio.h>

int main()
{
  int n_client, i, p, ci, ccd=0, cd3=0, cd5=0,t;
  float bs, pd, wgif;
  printf("Numero de clientes\n");
  scanf("%d", &n_client);
  wgif=0;
  for(i=1;i<=n_client;i++){
    printf("\nIngresar monto total de la compra\n");
    scanf("%f",&bs);
    if((bs>999)&&(bs<5001)){
      printf("Ingresar tipo de producto comprado (solo amarillo '1' o morado '13' obtienen descuento):\n");
      scanf("%d",&t);
      if(t==1||t==13){
        printf("Cantidad de productos comprados\n");
        scanf("%d",&p);
        if(p>2){
          ccd=ccd+1;
          if(bs>wgif){
            wgif=bs;
          }
          printf("Ingresar la cedula del cliente\n");
          scanf("%d",&ci);
          if(ci%2==0){
            cd5=cd5+1;
          }
          else {
            cd3=cd3+1;
          }
        } 
        else {
          printf("\nSolo compras mayores a 3 articulos\n");
        }
      } 
      else {
        printf("\nTipo de producto invalido\n");
      }
    }  
    else {
      printf("\nSolo compras mayores a 1000 y menores de 5000\n");
    }
  }  
  pd=ccd*100/n_client;
  printf("\nLa cantidad de clientes con descuento es: %d\n",ccd);
  printf("El porcentaje de clientes con descuento en relacion a la clientela total es: %g\n",pd);
  printf("clientes con 5 porciento de descuento adicional: %d\n",cd5);
  printf("clientes con 3 porciento de descuento adicional: %d\n",cd3);
  printf("La/s facturas que recibira/n Gif tienen por monto: %g$",wgif);
  return 0;
}