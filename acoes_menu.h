int acoes_menu(int escolhaAcaoMenu)
{
    int codigoProdutoPreencher, codigoProdutoConsultar, quantidadeProduto, exit = 0;

    switch (escolhaAcaoMenu)
    {
    case 1:
        /* code */
        break;

    case 2:
        /* code */
        break;

    case 3:
        do
        {
            printf("Digite o codigo (0 - 9) do produto para preencher o estoque, para sair digite -1: ");
            scanf("%d", &codigoProdutoPreencher);

            if(codigoProdutoPreencher >= 0 && codigoProdutoPreencher <= 9){
                printf("Digite a quantidade a ser inserida no estoque do produto: ");
                scanf("%d", &quantidadeProduto);

                preencher_estoque(codigoProdutoPreencher, quantidadeProduto);
            } else if(codigoProdutoPreencher == -1){
                exit = 1;
            }
        } while (exit == 0);

        break;

    case 4:
        do
        {
            printf("Digite o codigo (0 - 9) do produto para consultar o estoque, para sair digite -1: ");
            scanf("%d", &codigoProdutoConsultar);

            if(codigoProdutoConsultar >= 0 && codigoProdutoConsultar <= 9){
                consultar_estoque(codigoProdutoConsultar);
            } else if(codigoProdutoConsultar == -1){
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