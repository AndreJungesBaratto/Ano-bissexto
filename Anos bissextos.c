//Nome: Andr� Junges Baratto
//N� USP: 13731107

#include <stdio.h>  //Usaremos a biblioteca stdio.h para ler e escrever dados

void main(){        //Usei o void para n�o precisar botar o "return 0;" ao final do c�digo
    int ano;        //Ano � um n�mero inteiro, ent�o usamos int e definimos a vari�vel "ano"
        printf("Digite o ano:\n");      //Aqui pedimos para que o usu�rio digite o ano que deseja saber se � bissexto ou n�o
         scanf("%d", &ano);             //Lemos o ano em quest�o e o atribu�mos � vari�vel "ano"
          if(ano%400==0){                //Caso o ano seja divis�vel por 400, a divis�o ter� resto 0
             printf("O ano em questao eh bissexto!");    //Portanto ser� bissexto
          }
           else if(ano%4==0){             //Caso o ano n�o seja divis�vel por 400 mas seja divis�vel por 4, a divis�o tamb�m ter� resto 0
              printf("O ano em questao eh bissexto!");    //Portanto, tamb�m ser� bissexto
           }
            else{                          //O que resta s�o os casos em que o ano n�o � divis�vel nem por 400 nem por 4
               printf("O ano em questao nao eh bissexto"); //Portanto, n�o ser� bissexto
            }
}
