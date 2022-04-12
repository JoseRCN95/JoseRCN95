#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    int number,vitorias=0,derrotas=0;
    char repeat;
    char escolha[100];


    do{

    system("cls");

    printf("Escolha pedra, papel ou tesoura: ");                    //1-3 = PEDRA
    scanf("%s", escolha);                                           //4-6 = PAPEL
                                                                    //7-9 = TESOURA
    srand(time(NULL));
    number = 1 + rand()%9;

    //1-3 = PEDRA---------------------------------------
    if (number>=1&&number<=3&&strcmp(escolha,"papel")==0){
        printf("\nPC: Pedra\n");
        printf("\nVc venceu!\n");
        vitorias++;
    }
    else if (number>=1&&number<=3&&strcmp(escolha,"pedra")==0){
        printf("\nPC: Pedra\n");
        printf("\nEmpate!\n");
    }
    else if (number>=1&&number<=3&&strcmp(escolha,"tesoura")==0){
        printf("\nPC: Pedra\n");
        printf("\nVc perdeu!\n");
        derrotas++;
    }
    //4-6 = PAPEL------------------------------------
    if (number>=4&&number<=6&&strcmp(escolha,"papel")==0){
        printf("\nPC: Papel\n");
        printf("\nEmpate!\n");
    }
    else if (number>=4&&number<=6&&strcmp(escolha,"pedra")==0){
        printf("\nPC: Papel\n");
        printf("\nVc perdeu!\n");
        derrotas++;
    }
    else if (number>=4&&number<=6&&strcmp(escolha,"tesoura")==0){
        printf("\nPC: Papel\n");
        printf("\nVc venceu!\n");
        vitorias++;
    }
    //7-9 = TESOURA----------------------------------
    if (number>=7&&number<=9&&strcmp(escolha,"papel")==0){
        printf("\nPC: Tesoura\n");
        printf("\nVc perdeu!\n");
        derrotas++;
    }
    else if (number>=7&&number<=9&&strcmp(escolha,"pedra")==0){
        printf("\nPC: Tesoura\n");
        printf("\nVc venceu!\n");
        vitorias++;
    }
    else if (number>=7&&number<=9&&strcmp(escolha,"tesoura")==0){
        printf("\nPC: Tesoura\n");
        printf("\nEmpate!\n");
    }

    printf("\nVitorias: %d\nDerrotas: %d\n",vitorias,derrotas);

    printf("\nDeseja jogar novamente?(s ou n) ");
    scanf("%s",&repeat);

    }while(repeat=='s');

    return 0;
}
