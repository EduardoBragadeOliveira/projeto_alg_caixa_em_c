extern int estoque[10];

int acoes_menu(int escolhaAcaoMenu)
{
    int codigoProduto, quantidadeProduto, formaDePagamento, exit = 0;
    double valoresCompra;
    double valores_compra(int, int);

    switch (escolhaAcaoMenu)
    {
    case 1:
        do
        {
            printf("Digite o codigo (0 - 9) do produto inserir na compra, para sair digite -1: ");
            scanf("%d", &codigoProduto);

            if(codigoProduto >= 0 && codigoProduto <= 9){
                printf("Digite a quantidade do produto a ser inserida na compra: ");
                scanf("%d", &quantidadeProduto);
                if(quantidadeProduto > estoque[codigoProduto]){
                    printf("Estoque insuficiente, estoque atual de %d unidade(s) no produto %d\n", estoque[codigoProduto], codigoProduto);
                } else {
                    valoresCompra += valores_compra(codigoProduto, quantidadeProduto);
                }
            } else if(codigoProduto == -1){
                exit = 1;
            }
        } while (exit == 0);

        printf("\nO valor total da compra foi R$ %.2lf, qual sera a forma de pagamento?\n\n", valoresCompra);
        printf("Digite 1 para Pix\n");
        printf("Digite 2 para Cartao (debito ou credito)\n");
        printf("Digite 3 para Dinheiro\n");
        printf("Digite 4 para Crediario\n");
        scanf("%d", &formaDePagamento);

        break;

    case 2:
        /* code */
        break;

    case 3:
        do
        {
            printf("Digite o codigo (0 - 9) do produto para preencher o estoque, para sair digite -1: ");
            scanf("%d", &codigoProduto);

            if(codigoProduto >= 0 && codigoProduto <= 9){
                printf("Digite a quantidade a ser inserida no estoque do produto: ");
                scanf("%d", &quantidadeProduto);

                preencher_estoque(codigoProduto, quantidadeProduto);
            } else if(codigoProduto == -1){
                exit = 1;
            }
        } while (exit == 0);

        break;

    case 4:
        do
        {
            printf("Digite o codigo (0 - 9) do produto para consultar o estoque, para sair digite -1: ");
            scanf("%d", &codigoProduto);

            if(codigoProduto >= 0 && codigoProduto <= 9){
                consultar_estoque(codigoProduto);
            } else if(codigoProduto == -1){
                exit = 1;
            }

        } while (exit == 0);

        break;

    case 5:
        /* code */
        break;

    case 6:
        /* code */
        break;

    case 0:
        return 1;

    default:
        break;
    }

    return 0;
}