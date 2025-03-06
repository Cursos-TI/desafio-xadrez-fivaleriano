#include <stdio.h>

// Recursividade para o movimento da torre.
void recursivo(int t){
    if(t > 0){  // A definição do valor da variavel para o movimento da torre vai ficar por conta do usuario.
        printf("Direita.\n");
        recursivo(t -1); // O lopp vai ser definido de acordo com a quantidade da variavel que o usuario definir.
        }
    }
    // Recursividade para o movimento do bispo.
    void recursivo2(int b){
        if(b > 0){  // A definição do valor da variavel para o movimento do bispo vai ficar por conta do usuario.
        for (int i = 1; i >= 1; i--) { // loop externo ja pre definido de acordo com a logica do codigo assim como o loop interno.
            for (int j = 0; j < 1; j++) {  
                    printf("Cima.\n");    
            }   
            printf("Direita.\n"); 
                }
        recursivo2(b -1);  // O lopp vai ser definido de acordo com a quantidade da variavel que o usuario definir.
    }
        }
    // Recursividade para o movimento da rainha.
    void recursivo3(int r){
        if(r > 0){   // A definição do valor da variavel para o movimento da rainha vai ficar por conta do usuario.
        for (int i = 1; i >= 1; i--) {  // loop externo ja pre definido de acordo com a logica do codigo assim como o loop interno.
            for (int j = 0; j < 1; j++) {
                    printf("Baixo.\n");    
            }   
            printf("Esquerda.\n");
                }
        recursivo3(r -1);  // O lopp vai ser definido de acordo com a quantidade da variavel que o usuario definir.
    }
        }

int main() {

    int opcao; // variavel para a escolha de qual tipo de peça vc quer fazer o movimento.
    int torre; // variavel para definir a quantidade de movimento da torre e acioanamento da recursividade.
    int bispo; // variavel para definir a quantidade de movimento do bispo e acioanamento da recursividade.
    int rainha; // variavel para definir a quantidade de movimento da rainha e acioanamento da recursividade.

    do{   // utilizei um do-while para manter o codigo funcinado para teste.
    
        printf("##### Escolha qual peça deseja movimentar #####\n");
        printf("1. Movimento Torre.\n");
        printf("2. Movimento Bispo.\n");
        printf("3. Movimento Rainha.\n");
        printf("4. Movimento do Cavalo.\n");
        printf("5. Sair do programa.\n");  // criei uma opção caso o usuario desejar sair do programa.
        scanf("%d", &opcao);
    
    switch (opcao)  // criei um switch para deixa o codigo mais intuitivo e facil de manusear.
    {
    case 1:    // opção 1 ele vai rodar o pragama para realização do movimento da torre.
    printf("Digite a quantidade de casas para a torre se mover:\n");
    scanf("%d", &torre);
    printf("Movimento da torre:\n");
    recursivo(torre);{
    
    }
    
        break;
    case 2:     // opção 2 ele vai rodar o pragama para realização dp movimento do bispo.
    printf("Digite a quantidade de casas para o bispo se mover:\n");
    scanf("%d", &bispo); // criei esse scanf para que o usuario posso digitar a quantidade de casas que ele deseja mover a peça.
    printf("Movimento do bispo:\n");
    recursivo2(bispo);{  // função para ativar a recursividade.
    
    }
    
        break;
    case 3:      // opção 3 ele vai rodar o pragama para realização dp movimento da rainha.
    printf("Digite a quantidade de casas para a rainha se mover:\n");
    scanf("%d", &rainha);  // criei esse scanf para que o usuario posso digitar a quantidade de casas que ele deseja mover a peça.
    printf("Movimento da rainha:\n");
    recursivo3(rainha);{  // função para ativar a recursividade.
    
    }
    
    
        break;
    case 4:      // esse case funciona caso o usuario desejar fazer o movimento do cavalo.
    printf("Movimento do cavalo:\n");
    for (int i = 1; i--;) { // for externo definido para 1 loop.
    
        for (int j = 0; j < 2; j++) { // for interno definido para 2 loops.
    
            printf("Cima.\n");
    
    }
    
            printf("Direita.\n");
    
    } 
    
        break;
    case 5:      // esse case ira ativar caso o usuario desejar sair do programa.
    printf("O usuario digitou 5, esse comando encera o programa...\n");
    
        break;
    default:
    printf("Opção invalida. Tente novamente!\n"); // caso o usuario utilize uma opção invalida.
        break;
    }
    
    
    } while (opcao != 5);  // esse do-while para manter o programa funcionado pra obter novos teste.
    
        printf("Saindo...\n");

    return 0;
}
