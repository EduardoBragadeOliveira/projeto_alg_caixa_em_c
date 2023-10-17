extern int estoque[10];

int consultar_estoque(int codigoProduto)
{
    printf("A quantidade do produto %d eh: %d unidades\n", codigoProduto, estoque[codigoProduto]);
}