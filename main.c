#include <stdio.h>
#include <math.h>

int main()
{
    double opcao;
    double n1;
    double n2;
    double numeroRaiz;
    double resultadoRaiz;

    printf("FACULDADE METROPOLITANAS UNIDAS");
    printf(" \n");
    printf(" \n");
    printf("APS - LOGICA DE PROGRAMACAO - 1º SEMESTRE");
    printf(" \n");
    printf(" \n");
    printf("Desenvolvedor: Marcus Neves\n");
    printf("RA: 6932681\n");
    printf("Contato: marcus-neves@outlook.com\n");
    printf(" \n");
    printf("*****************\n");
    printf("*fmu-soma-e-raiz*\n");
    printf("*****************\n");
    printf(" \n");
    printf("MENU PRINCIPAL\n");
    printf(" \n");
    printf("1 - Somar dois números\n");
    printf("2 - Saber a raiz quadrada de um número\n");
    printf(" \n");
    printf(" \n");
    printf("Digite sua opção:");
    scanf("%lf",&opcao);

    if(opcao == 2) {
          printf("\nCALCULANDO RAÍZ QUADRADA\n");
          printf("Digite um número: ");
          scanf("%lf",&numeroRaiz);
          printf("RESULTADO: %f",resultadoRaiz = sqrt(numeroRaiz));
      }
      if(opcao == 1) {
          printf("\nSOMANDO DOIS NÚMEROS");
          printf("\nDigite o primeiro número: ");
          scanf("%lf",&n1);
          printf(" \n");
          printf("\nDigite o segundo número: ");
          scanf("%lf",&n2);
          printf("-----------------------------\n");
          printf("RESULTADO: %f\n", n1 + n2);
          printf("-----------------------------\n");
      } 
      
}