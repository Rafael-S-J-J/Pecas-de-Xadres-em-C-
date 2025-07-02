#include <stdio.h>

int main(){

    int option;

    printf("1 - Inciar jogo\n");
    printf("2 - Como funicona ?\n");
    printf("3 - Sair...\n");
    scanf("%d", &option);

    switch (option)
    {
        case 1: {
            int pecas;

            do{

             printf(" Escolha sua peca:\n");
             printf("1 - Torre \n");    
             printf("2 - Bispo\n");
             printf("3 - Rainha\n");
             printf("4 - Cavalo\n");
             printf("5 - Sair do jogo\n");
             scanf("%d", &pecas);

             switch (pecas) 
             {
                case 1:
                   printf("Movimentacao torre:\n");
                   for (int torre = 0; torre < 5; torre++)
                   {
                    printf("Direita\n");
                   }
                   break;

                case 2:
                   printf("Movimento Bispo:\n");
                   int bispo = 0;
                   while (bispo < 5)
                   {
                    printf("Esquerda,Direita\n");
                    bispo++;
                   }
                   break;
                   
                case 3:
                printf("Movimento da Rainha\n");
                int rainha = 0;
                do
                {
                    printf("Cima\n");
                    rainha++;
                } while (rainha < 8);
                break;
                

                case 4:
                printf("Movimento do Cavalo\n");
                for (int cavalo = 0; cavalo < 2; cavalo++)
                {
                    printf ("Direita\n");    
                 }
                    printf("Cima\n");
                break;


                case 5:
                printf("Sair do jogo\n");
                break;
                
                default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
             }

            } while (pecas != 5);   
            break;
         }
        
        
        
        case 2:
        printf("Idealização\n");
        break;

        case 3:
        printf("Saindo do jogo...\n");
        break;
    
        default:
        printf("Opcao invalida! Tente novamente.\n");
        break;
    }

    
    return 0;
}