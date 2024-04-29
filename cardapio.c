#include <stdio.h>
#include <locale.h>


void cardapio(){
  printf(  "________________________________________________\n");
  printf(  "|                  CARDÁPIO                    |\n");
  printf(  "|                                              |\n");
  printf(  "|1-Misto quente.......................R$  8.00 |");
  printf("\n|2-Calafrango.........................R$ 10.50 |");
  printf("\n|3-X-Bacon............................R$ 11.00 |");
  printf("\n|4-X-Calabresa........................R$ 16.00 |");
  printf("\n|5-Hambúrguer de catupiry.............R$ 20.00 |");
  printf("\n|6-Porção de batatas fritas...........R$ 23.00 |");
  printf("\n|7-Porção de carne com mandioca.......R$ 27.00 |");
  printf("\n|8-Porção de frango com calabresa.....R$ 30.00 |");
  printf("\n|                                              |");
  printf("\n|9-refrigerante lata................R$  5.00   |");
  printf("\n|10-Cerveja 1 litro.................R$ 10.00   |");
  printf("\n|11-Coca-cola 1 litro...............R$ 10.00   |");
  printf("\n|12-Guaraná 1 litro.................R$  9.00   |");
  printf("\n|______________________________________________|");
  return;
}

int main(void) {
  int pedido = 1;
  int quantidade = 2;
  float valores[13]={0, 8, 10.5, 11, 16, 20, 23, 27, 30, 5, 10, 10, 9};
  float valorfinal, valorpago;

  setlocale(LC_ALL, "Portuguese");
  cardapio(); 

   while(pedido != 0){
    printf("\nInsira o Código do item desejado para adicionar à sacola (ou 0 para finalizar o pedido): ");
    scanf("%d", &pedido);
      if(pedido != 0){
           if(pedido < 0 || pedido > 12){
             printf("\nNúmero inválido, tente novamente\n");
           }
           else{
             printf("\nDigite a quantidade desejada: ");
             scanf("%d", &quantidade);
                if(quantidade < 1){
                    printf("\nQuantidade inválida! Tente novamente\n");
                }
                else{
                     valorfinal = valorfinal + (valores[pedido]*quantidade);}
            }
      }
  }

  printf("\nO valor total do pedido é: R$%.2f", valorfinal);
  printf("\n\nDigite o valor pago pelo cliente :R$");
  scanf("%f", &valorpago);

    if(valorpago < valorfinal){
      while(valorpago < valorfinal){ 
        printf("\nValor insuficiente! Faltam R$ %.2f", valorfinal-valorpago);
        printf("\nSolicite ao cliente o valor restante: R$");
        valorfinal = valorfinal-valorpago;
        scanf("%f", &valorpago);} 
      }

    if(valorpago > valorfinal){
      printf("\nO seu troco é de R$%.2f", valorpago-valorfinal);
    }

  printf("\nPagamento realizado com sucesso! Volte sempre.");
  printf("\n\nEntregue");
return 0;
}
