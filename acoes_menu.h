extern int estoque[10];
extern double crediario[10];

int acoes_menu(int escolhaAcaoMenu)
{
    int codigoProduto, quantidadeProduto, formaDePagamento, codigoCliente, clienteSorteado, exit = 0;
    double valoresCompra, valorPago;
    double valores_compra(int, int);

    switch (escolhaAcaoMenu)
    {
    case 1:
        do
        {
            printf("Digite o código (0 - 9) do produto inserir na compra, para sair digite -1: ");
            scanf("%d", &codigoProduto);

            if (codigoProduto >= 0 && codigoProduto <= 9)
            {
                printf("Digite a quantidade do produto a ser inserida na compra: ");
                scanf("%d", &quantidadeProduto);
                if (quantidadeProduto > estoque[codigoProduto])
                {
                    printf("Estoque insuficiente, estoque atual de %d unidade(s) no produto %d\n", estoque[codigoProduto], codigoProduto);
                }
                else
                {
                    valoresCompra += valores_compra(codigoProduto, quantidadeProduto);
                }
            }
            else if (codigoProduto == -1)
            {
                exit = 1;
            }
        } while (exit == 0);

        printf("\nO valor total da compra foi R$ %.2lf, qual será a forma de pagamento?\n\n", valoresCompra);

        do
        {
            printf("Digite 1 para Pix\n");
            printf("Digite 2 para Cartão (débito ou crédito)\n");
            printf("Digite 3 para Dinheiro\n");
            printf("Digite 4 para Crediário\n");
            scanf("%d", &formaDePagamento);
            if (formaDePagamento < 1 || formaDePagamento > 4)
            {
                printf("Opção inválida, digite novamente a forma de pagamento:\n");
            }
            else
            {
                forma_de_pagamento(valoresCompra, formaDePagamento);
            }
        } while (formaDePagamento < 1 || formaDePagamento > 4);

        break;

    case 2:
        do
        {
            printf("Digite o código (0 - 9) do cliente: ");
            scanf("%d", &codigoCliente);
        } while (codigoCliente < 0 || codigoCliente > 9);

        printf("O montante devedor do cliente %d é R$ %.2lf.\n", codigoCliente, crediario[codigoCliente]);

        break;

    case 3:
        do
        {
            printf("Digite o código (0 - 9) do produto para preencher o estoque, para sair digite -1: ");
            scanf("%d", &codigoProduto);

            if (codigoProduto >= 0 && codigoProduto <= 9)
            {
                printf("Digite a quantidade a ser inserida no estoque do produto: ");
                scanf("%d", &quantidadeProduto);

                preencher_estoque(codigoProduto, quantidadeProduto);
            }
            else if (codigoProduto == -1)
            {
                exit = 1;
            }
        } while (exit == 0);

        break;

    case 4:
        do
        {
            printf("Digite o código (0 - 9) do produto para consultar o estoque, para sair digite -1: ");
            scanf("%d", &codigoProduto);

            if (codigoProduto >= 0 && codigoProduto <= 9)
            {
                consultar_estoque(codigoProduto);
            }
            else if (codigoProduto == -1)
            {
                exit = 1;
            }

        } while (exit == 0);

        break;

    case 5:
        do
        {
            printf("Digite o código (0 - 9) do cliente: ");
            scanf("%d", &codigoCliente);
        } while (codigoCliente < 0 || codigoCliente > 9);

        if (crediario[codigoCliente] > 0)
        {
            do
            {
                printf("Digite o valor do qual você deseja quitar: R$ ");
                scanf("%lf", &valorPago);

                if (valorPago <= 0)
                {
                    printf("Você precisa digitar um valor maior que R$ 0,00\n");
                }
                else if (valorPago > crediario[codigoCliente])
                {
                    printf("O valor máximo a ser pago é de R$ %.2lf\n", crediario[codigoCliente]);
                }
            } while (valorPago <= 0 || valorPago > crediario[codigoCliente]);

            crediario[codigoCliente] -= valorPago;

            if (crediario[codigoCliente] == 0)
            {
                printf("O montante devedor está quitado, obrigado!\n");
            }
            else
            {
                printf("O montante devedor restante é de R$ %.2lf\n", crediario[codigoCliente]);
            }
        } else {
            printf("O cliente %d não possui dívidas ativas\n", codigoCliente);
        }

        break;

    case 6:

        srand(time(0));

        do
        {
            clienteSorteado = rand()%10;
        } while (crediario[clienteSorteado] == 0);
        
        printf("Parabéns ao cliente %d, que teve seu montante devedor de %.2f perdoado!\n", clienteSorteado, crediario[clienteSorteado]);

        crediario[clienteSorteado] = 0.0;
            
        break;

    case 0:
        printf("Finalizando EL Software 1.0 ...");
        return 1;

    default:
        printf("Ação inválida, digite novamente\n");
        break;
    }

    return 0;
}