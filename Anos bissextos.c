//Nome: André Junges Baratto
//Nº USP: 13731107

#include <stdio.h>  //Usaremos a biblioteca stdio.h para ler e escrever dados

void main(){        //Usei o void para não precisar botar o "return 0;" ao final do código
    int ano;        //Ano é um número inteiro, então usamos int e definimos a variável "ano"
        printf("Digite o ano:\n");      //Aqui pedimos para que o usuário digite o ano que deseja saber se é bissexto ou não
         scanf("%d", &ano);             //Lemos o ano em questão e o atribuímos à variável "ano"
          if(ano%400==0){                //Caso o ano seja divisível por 400, a divisão terá resto 0
             printf("O ano em questao eh bissexto!");    //Portanto será bissexto
          }
           else if(ano%4==0){             //Caso o ano não seja divisível por 400 mas seja divisível por 4, a divisão também terá resto 0
              printf("O ano em questao eh bissexto!");    //Portanto, também será bissexto
           }
            else{                          //O que resta são os casos em que o ano não é divisível nem por 400 nem por 4
               printf("O ano em questao nao eh bissexto"); //Portanto, não será bissexto
            }
}
