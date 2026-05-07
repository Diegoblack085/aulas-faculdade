#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int jogador, computador;

int main()
{
    printf("Bem vindo ao JoKenPo em C, suas jogadas podem ser:\n\n1 - Pedra\n2 - Papel\n3 - Tesoura\n\nBoa Sorte\n\n");
       
       srand(time(NULL));
       while(jogador == computador){
        printf("Escolha a sua jogada:\n1 - Pedra, 2 - Papel, 3 - Tesoura\n");
        scanf("%d", &jogador);  
         
    computador = (rand() % 3) + 1;
   
    printf("o computador escolheu: %d\n\n", computador);
   
     if(jogador == computador){
           printf("Empatou, que peninha, tente novamente\n\n");
    }    
    else if(jogador < computador){
          printf("Damn, você perdeu pro computador, paia em...\n\n");
    }    
      else{
           printf("Parabéns, você conseguiu ganhar de uma máquina...\n\n");
    }
   

}
    return 0;
}