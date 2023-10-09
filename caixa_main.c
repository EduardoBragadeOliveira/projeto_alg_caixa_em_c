#include <stdio.h>
#include "preencher_estoque.h"
#include "consultar_estoque.h"
#include "acoes_menu.h"

int estoque[10];

int main()
{
    int exit = 0, escolhaAcaoMenu;

    do
    {
        printf("\nBem-vindo ao EL Software 1.0");
        printf("\n\nDigite 1 para a simulacao de compra");
        printf("\nDigite 2 para consultar os debitos de clientes do crediario");
        printf("\nDigite 3 para preencher o estoque");
        printf("\nDigite 4 para consultar o estoque");
        printf("\nDigite 5 para pagar debitos de clientes do crediario");
        printf("\nDigite 6 para sortear um cliente para perdoar divida");
        printf("\n\nDigite 0 para fechar o menu\n");
        scanf("%d", &escolhaAcaoMenu);

        exit = acoes_menu(escolhaAcaoMenu);
    } while (exit == 0);
    

    return 0;
}
