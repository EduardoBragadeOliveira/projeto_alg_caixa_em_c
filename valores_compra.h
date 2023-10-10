double valores_compra(int codigoProduto, int quantidadeProduto){
    switch (codigoProduto)
    {
    case 0:
        if(quantidadeProduto >= 2){
            return 8.00 * quantidadeProduto;
        } else {
            return 10.50 * quantidadeProduto;
        }

        break;
    
    case 1:
        if(quantidadeProduto >= 14){
            return 6.00 * quantidadeProduto;
        } else {
            return 7.45 * quantidadeProduto;
        }

        break;
    
    case 2:
        if(quantidadeProduto >= 3){
            return 87.60 * quantidadeProduto;
        } else {
            return 98.70 * quantidadeProduto;
        }

        break;
    
    case 3:
        if(quantidadeProduto >= 5){
            return 6.13 * quantidadeProduto;
        } else {
            return 7.50 * quantidadeProduto;
        }

        break;
    
    case 4:
        if(quantidadeProduto >= 2){
            return 23.00 * quantidadeProduto;
        } else {
            return 26.70 * quantidadeProduto;
        }

        break;
    
    case 5:
        if(quantidadeProduto >= 4){
            return 26.49 * quantidadeProduto;
        } else {
            return 27.00 * quantidadeProduto;
        }

        break;
    
    case 6:
        if(quantidadeProduto >= 2){
            return 5.59 * quantidadeProduto;
        } else {
            return 6.00 * quantidadeProduto;
        }

        break;
    
    case 7:
        if(quantidadeProduto >= 5){
            return 11.34 * quantidadeProduto;
        } else {
            return 12.00 * quantidadeProduto;
        }

        break;
    
    case 8:
        if(quantidadeProduto >= 2){
            return 138.45 * quantidadeProduto;
        } else {
            return 145.00 * quantidadeProduto;
        }

        break;
    
    case 9:
        if(quantidadeProduto >= 12){
            return 6.20 * quantidadeProduto;
        } else {
            return 6.49 * quantidadeProduto;
        }

        break;
    
    default:
        return 0.0;
        break;
    }
}