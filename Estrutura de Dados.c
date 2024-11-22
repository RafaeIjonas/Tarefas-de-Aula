#include <stdbool.h> // Biblioteca que trabalha com booleanos
#include <stdio.h>   //Bibliotecas

int main() {

  int numero = 10;             // %d, %i
  float pi = 3.14;             // %f
  double pi_grande = 3.141516; //%lf
  char letra = 'f';            // %c
  bool t = false;              // %b

  printf("O valor de pi é: %i\n", numero);
  printf("O valor de pi é %f\n", pi);
  printf("O valor de pi_grande é %lf\n", pi_grande);
  printf("O valor %c de letra é \n", letra);
  printf("O valor de t é %b\n", t);

  return 0;
}