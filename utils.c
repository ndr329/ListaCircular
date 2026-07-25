#include "utils.h"

#include "listaCircular.h"

#include <stdlib.h>

// Exibe o menu de opções do usuário
// Entrada: nenhum
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: nenhuma
void menu(void) {
    Lista* l = NULL;

    int op = -1;
    
    TipoItem x;

    while(op != 0) {
        printf("\nEscolha uma das opções:\n\n");
        printf("1. Inserir um elemento\n");
        printf("2. Exibir lista\n");
        printf("3. Retirar um elemento\n");
        printf("0. Sair do programa\n");
        printf("\nOpção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Digite o valor do elemento: ");
                scanf("%d", &x);
                l = inserir(l, x);
                break;

            case 2:
                printf("Lista: ");
                imprimir(l);
                break;

            case 3:
                printf("Digite o valor do elemento: ");
                scanf("%d", &x);
                l = retirar(l, x);
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opção inválida.\n");
                break;
            
        }
    }

    liberar(l);
    l = NULL;
}