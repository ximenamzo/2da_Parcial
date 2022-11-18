/* Universidad de Colima
 * Facultad de Ingeniería Electromecánica
 * Ingeniería en Software, Tercer Semestre
 * Ximena Manzo Castrejón
 * Exámen seguda parcial
 * Nov.18
 * */

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

/* S A L I D A   D E L   P R O G R A M A :
 *
 * Ingresa el tamaño del array: 10
 * Valor 1: 32
 * Valor 2: 76
 * Valor 3: 45
 * Valor 4: 92
 * Valor 5: 13
 * Valor 6: 2
 * Valor 7: 65
 * Valor 8: 8
 * Valor 9: 90
 * Valor 10: 27
 *
 * Los valores desordenados son: 32, 76, 45, 92, 13, 2, 65, 8, 90, 27
 *
 * Ordenando...
 *
 * Los valores YA ordenados son: 2, 8, 13, 27, 32, 45, 65, 76, 90, 92
 *
 * */
