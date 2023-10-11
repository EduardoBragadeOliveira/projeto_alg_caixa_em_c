#include <stdio.h>
#include <locale.h>
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
    setlocale(LC_ALL, "Portuguese");

    do
    {
        printf("\nBem-vindo ao EL Software 1.0");
        printf("\n\nDigite 1 para a simulação de compra");
        printf("\nDigite 2 para consultar os débitos de clientes do crediário");
        printf("\nDigite 3 para preencher o estoque");
        printf("\nDigite 4 para consultar o estoque");
        printf("\nDigite 5 para pagar débitos de clientes do crediário");
        printf("\nDigite 6 para sortear um cliente para perdoar dívida");
        printf("\n\nDigite 0 para fechar o menu\n");
        printf("Escolha: ");
        scanf("%d", &escolhaAcaoMenu);

        exit = acoes_menu(escolhaAcaoMenu);
    } while (exit == 0);
    

    return 0;
}
