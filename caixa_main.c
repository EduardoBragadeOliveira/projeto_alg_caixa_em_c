#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "preencher_estoque.h"
#include "consultar_estoque.h"
#include "acoes_menu.h"
#include "valores_compra.h"
#include "forma_de_pagamento.h"

int estoque[10];
double crediario[10];

int main()
{
    int exit = 0, escolhaAcaoMenu;

    do
    {
        printf("\033[1;41m\nBem-vindo ao EL Software 1.0\033[m");
        printf("\n\nDigite \033[1;41m1\033[m para a simulacao de compra");
        printf("\nDigite \033[1;41m2\033[m para consultar os debitos de clientes do crediario");
        printf("\nDigite \033[1;41m3\033[m para preencher o estoque");
        printf("\nDigite \033[1;41m4\033[m para consultar o estoque");
        printf("\nDigite \033[1;41m5\033[m para pagar debitos de clientes do crediario");
        printf("\nDigite \033[1;41m6\033[m para sortear um cliente para perdoar divida");
        printf("\n\nDigite \033[1;41m0\033[m para fechar o menu\n");
        printf("Escolha: ");
        scanf("%d", &escolhaAcaoMenu);

        exit = acoes_menu(escolhaAcaoMenu);
    } while (exit == 0);
    

    return 0;
}
