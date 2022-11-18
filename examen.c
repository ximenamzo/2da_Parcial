#include<stdio.h>
#include<stdlib.h>

void cambiar(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void imprimir(int list[], int n){
  for(int i=0; i<n-1; i++){
    printf("%d, ",list[i]);
  }
  printf("%d\n",list[n-1]);
}

void ordenamiento(int list[], int n){
  int min=0, indexMin=0, temp=0;
  for(int i=0; i<n; i++){
    min = i;
    for(int j=i+1; j<n; j++){
      if(list[j] < list[min]) min = j;
    }
    indexMin = min;
    if(indexMin != i){
      cambiar(&list[min], &list[i]);
    }
  }
}

void main(){
  int n=0;
  printf("Ingresa el tamaño del array: ");
  scanf("%d",&n);
  int list[n];
  for(int i=0; i<n; i++){
    printf("Valor %d: ",i+1);
    scanf("%d",&list[i]);
  }
  printf("\nLos valores desordenados son: ");
  imprimir(list, n);
  printf("\nOrdenando...\n\n");
  ordenamiento(list,n);
  printf("Los valores YA ordenados son: ");
  imprimir(list, n);
  printf("\n\n");
}
