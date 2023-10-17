extern double crediario[10];

void forma_de_pagamento(double valoresCompra, int formaDePagamento){
    int codigoCliente;

    switch (formaDePagamento)
    {
    case 1:
        printf("Aplicado 5%% de desconto na compra! Passando de R$ %.2lf para R$ %.2lf.\n", valoresCompra, valoresCompra * 0.95);       
        break;
    
    case 2:
        printf("Total a pagar: R$ %.2lf\n", valoresCompra);
        break;
    
    case 3:
        printf("Aplicado 2%% de desconto na compra! Passando de R$ %.2lf para R$ %.2lf.\n", valoresCompra, valoresCompra * 0.98);
        break;
    
    case 4:
        do
        {
            printf("Digite o codigo (0 - 9) do cliente: ");
            scanf("%d", &codigoCliente);
        } while (codigoCliente < 0 || codigoCliente > 9);
        
        crediario[codigoCliente] += valoresCompra;
        printf("O valor de R$ %.2lf foi adicionado no crediario do cliente %d, montante de R$ %.2lf\n", valoresCompra, codigoCliente, crediario[codigoCliente]);

        break;
    
    default:
        break;
    }

    printf("Obrigado pela compra, volte sempre!\n");
}