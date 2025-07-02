#include <stdio.h>

int main(){

    int option;

    // Primeiro laço de reptição do menu interativo principal.
    do{ 

    // Imprimindo as opções do menu e armazenando a opção do usuário.
    printf("1 - Inciar jogo\n");
    printf("2 - Como funicona ?\n");
    printf("3 - Sair...\n");
    scanf("%d", &option);

    // Aplicando o switch de casos correspondente ao meu menu. 
    switch (option)
    {

        // Criando um novo processo de casos usando o switch.
        case 1: {
            int pecas;

            do{ // Adicionando mais um laço de reptição para no novo menu

             printf(" Escolha sua peca:\n");
             printf("1 - Torre \n");    
             printf("2 - Bispo\n");
             printf("3 - Rainha\n");
             printf("4 - Cavalo\n");
             printf("5 - Retornar ao menu principal\n");
             scanf("%d", &pecas);

             switch (pecas) // Switch para controle das peças
             {
                case 1:
                   printf("Movimentacao torre:\n");
                   for (int torre = 0; torre < 5; torre++)
                   {
                    printf("Direita\n");
                   }
                   printf("\n");
                   break;

                case 2:
                   printf("Movimento Bispo:\n");
                   int bispo = 0;
                   while (bispo < 5)
                   {
                    printf("Esquerda,Direita\n");
                    bispo++;
                   }
                   printf("\n");
                   break;
                   
                case 3:
                printf("Movimento da Rainha\n");
                int rainha = 0;
                do
                {
                    printf("Cima\n");
                    rainha++;
                } while (rainha < 8);
                printf("\n");
                break;
                

                case 4:
                printf("Movimento do Cavalo\n");
                for (int cavalo = 0; cavalo < 2; cavalo++)
                {
                    printf ("Direita\n");    
                 }
                    printf("Cima\n");
                    printf("\n");
                break;


                case 5:
                printf("Retornar ao menu principal\n");
                printf("\n");
                break;
                
                default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
             }

            } while (pecas != 5); // Do-While que faz o case 5 retornar ao menu principal.
            break;
         }
        
        
        
        case 2:
        printf("Idealizacao\n");
        printf("Uma curta demostração de como funciona a movimentacao das pecas de xadres\n");
        break;

        case 3:
        printf("Saindo do jogo...\n");
        break;
    
        default:
        printf("Opcao invalida! Tente novamente.\n");
        break;
    }

} while (option != 3);

    
    return 0;
}