#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  //Iremos fazer um verificador de triângulo, que caso confirmado, calcula seu perímetro

  float lado1, lado2, lado3, perimetro;

    // Entrada de dados
    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    // Verifica se os lados formam um triângulo
    if ((lado1 + lado2 > lado3) &&
        (lado1 + lado3 > lado2) &&
        (lado2 + lado3 > lado1)) {

          perimetro = lado1 + lado2 + lado3;

          printf("\nTemos um possivel triangulo \nseu perimetro e de: %.2f",perimetro);

        }
        else{
          system("start https://youtu.be/dQw4w9WgXcQ?si=OclBuQxgwzdERju9");
        }
  
  return 0;
}
