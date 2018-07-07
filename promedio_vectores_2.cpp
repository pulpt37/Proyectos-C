# include <stdio.h>

int main (){
  int n=0;
  int i=0;
  int prom=0;
  printf("\nCuantos alumnos quieres: ");
  scanf("%d",&n);
  int a[n];
  for (i=0;i<n;i++){
  //  printf("Valor de i: %d\n",i);
    printf("Alumno %d:  ",i+1);
    scanf("%d",&a[i]);
  }
  for (i=0;i<n;i++){
    //printf("Valor de i: %d\n",i);
    printf("%d\n",a[i]);
  }
  printf("Promedio\n");
  for (i=0;i<n;i++){
    prom = a[i]+prom;
    //printf("%d\n",prom );
  }
  prom = prom/n;
  printf("%d\n",prom );

  return 0;
}
