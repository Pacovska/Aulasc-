#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");
    printf("*** O numero se encontra entre 0 e 100 ***\n");
    printf("******************************************\n");
    
    
    srand(time(NULL));
    int maquina = rand() % 100;
    float chute, tentativas = 0;
    char valor = 'S';
    
    while (valor == 'S')
    {
       
        printf("Chute um valor: ");
        scanf("%f", &chute);
        
        if (chute < maquina) 
        {
           printf("Voce errou!!\n");
           printf("O numero que voce tem que acertar e maior\n\n");
           tentativas ++;
        }
        else if (chute > maquina) 
        {
            printf("Voce errou!!\n");
            printf("O numero que voce tem que acertar e menor\n\n");
            tentativas ++;
        }
        else if (chute == maquina)
        {
            printf("Voce Acetou!!\n");
            printf("O seu numero de tentativas totais foi de %.0f \n", tentativas);
            valor = 'N';
        }  
    }
}