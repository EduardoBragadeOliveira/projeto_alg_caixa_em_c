extern int estoque[10];

int preencher_estoque(int codigoProduto, int quantidade)
{
    estoque[codigoProduto] += quantidade;
    printf("Estoque do produto %d preenchido com sucesso!\n", codigoProduto);
    return 0;
}