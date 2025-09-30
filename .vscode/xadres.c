#include <stdio.h>

//--recussividade da torre--
void movertorre(int torre){
    if (torre > 0)
    {
        printf("Direita\n");
        movertorre (torre - 1);
    }
}
void movertorre1(int torre){
    if (torre > 0)
    {
        printf("Esquerda\n");
        movertorre1 (torre - 1);
    }
    
}
// --recussividade da rainha
void moverrainha(int rainha){
    if (rainha > 0)
    {
        printf("Cima\n");
        printf("Esquerda\n");
        moverrainha (rainha - 1);
    }
    
}

void moverrainha1(int rainha){
    if (rainha > 0)
    {
        printf("Cima\n");
        printf("Direita\n");
        moverrainha1 (rainha - 1);
    }
    
}
//--recussividade do bispo--
void moverbispo(int bispo){
    if (bispo > 0)
    {
        printf("Cima\n");
        printf("Direita\n");
        moverbispo (bispo - 1);
    }
    
}
void moverbispo1(int bispo){
    if (bispo > 0)
    {
        printf("Cima\n");
        printf("Esquerda\n");
        moverbispo1 (bispo - 1);
    }
    
}

int main() {

    // --movimentação da torre usando recursividade---
    int opcao;
    int movimentoda_torre = 5;
    
    do {
        printf("Escolha o movimento da torre \n");
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("Escolha uma Opçao!!\n");
        scanf("%d", &opcao);
    
        if (opcao < 1 || opcao > 2)
        {
            printf("\nOpção invalida! Por Favor, digite 1 ou 2\n\n");
        }
    
    } while (opcao < 1 || opcao > 2);
    switch(opcao)
    {
        case 1:
            movertorre(5);
        break;

        case 2:
            movertorre1(5); 
        break;
    }

    // --movimentação da bispo usando recursividade---
    int opcao1;
    int movimentoda_bispo = 5;
    
    do {
        printf("Escolha o movimento da Bispo \n");
        printf("1. Cima e Direita\n");
        printf("2. Cima e Esquerda\n");
        printf("Escolha uma Opçao!!\n");
        scanf("%d", &opcao1);
    
        if (opcao1 < 1 || opcao1 > 2)
        {
            printf("\nOpção invalida! Por Favor, digite 1 ou 2\n\n");
        }
    
    } while (opcao1 < 1 || opcao1 > 2);
    switch(opcao1)
    {
        case 1:
            moverbispo(5);
        break;

        case 2:
            moverbispo1(5); 
        break;
    }

    // --movimentação da rainha usando recursividade---
    int escollha;
    int movimentoda_rainha = 8;
    
    do {
        printf("Escolha o movimento da rainha \n");
        printf("1. Cima e Esquerda\n");
        printf("2. Cima e Direita\n");
        printf("Escolha uma Opçao!!\n");
        scanf("%d", &escollha);
    
        if (escollha < 1 || escollha > 2)
        {
            printf("\nOpção invalida! Por Favor, digite 1 ou 2\n\n");
        }
    
    } while (escollha < 1 || escollha > 2);
    switch(escollha)
    {
        case 1:
            moverrainha(8);
        break;

        case 2:
            moverrainha1(8); 
        break;
    }   

    //loops complexo do cavalo---
    int option;
    int movimentocavalo = 1;

    do{  
        printf("\nMovimentação do cavalo:\n");
        printf("1. Cima cima direita\n");
        printf("2. Cima cima esquerda \n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);

        if (option < 1 || option > 3)
        {
            printf("\nOpção invalida! Por Favor, digite 1 ou 2\n\n");
        }
    } while (option < 1 || option > 3);
    switch(option) 
    {
        case 1:
        while (movimentocavalo--)
            {
                for (int i = 0; i < 2; i++)
                {
                    printf("cima\n");
                }
                printf("Direita\n");
            }
                break;
        case 2:
        while (movimentocavalo--)
            {
                for (int j = 0; j < 2; j++)
                {
                    printf("cima\n");
                }
                printf("Esquerda\n");
            }
            break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
      
    // loops aninhados do bispo
    int digito;
    int movimentoBISPO = 5;
   
    do{
        printf("\nMovimento do bispo:\n");
        printf("1. Cima direita\n");
        printf("2. Cima esquerda \n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &digito);

        if (digito < 1 || digito > 3)
        {
            printf("\nOpção invalida! Por Favor, digite entre 1 e 3\n\n");
        }
    } while (digito < 1 || digito > 3);
    switch(digito) 
    {
        case 1:
         for (int i = 1; i <= 5; i++) {
              for (int j = 1; j <= 1; j++) {
                 printf("cima\n", i + j);
            }
             printf(" Direita\n");
        }
                break;
        case 2:
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= 1; j++) {
                    printf("cima\n", i + j);
             }
             printf(" Esquerda\n");
        }
            break;
            case 3:
                printf("Saindo...\n");
                break;
            
        }
       return 0;
 }