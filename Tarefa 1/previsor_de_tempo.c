#include <stdio.h>

int main()
{
    int barometro, termometro;
    printf("Voce ira possuir 3 estados do Barometro e Termometro, sendo eles: \n");
    printf("1 - Subindo. \n2 - Estacionario. \n3 - Baixando. \n");
    printf("Informe o estado do Barometro: ");
    scanf("%d", &barometro);
    printf("Informe o estado do Termometro: ");
    scanf("%d", &termometro);
    switch (barometro)
    {
    case 1:
        if (termometro == 1)
        {
            printf("Tempo bom, ventos quentes e secos");      
        }
        else if (termometro == 2)
        {
            printf("Tempo bom, ventos de leste frescos");
        }
        else if (termometro == 3)
        {
            printf("Tempo bom, ventos de sul a sudeste");
        }
        else
        {
            printf("Opção invalida!!");
        }
        break;
    case 2:
        if (termometro == 1)
        {
            printf("Tempo mudando para bom, ventos de leste");
        }
        else if (termometro == 2)
        {
            printf("Tempo incerto, ventos variaveis");
        }
        else if (termometro == 3)
        {
            printf("Chuva provavel, ventos de sul a sudeste");
        }
        else 
        {
            printf("Opção invalida!!");
        }
        break;
    case 3:
        if (termometro == 1)
        {
            printf("Tempo instavel, aproximação de frente");
        }
        else if (termometro == 2)
        {
            printf("Frente quente com chuvas provaveis");
        }
        else if (termometro == 3)
        {
            printf("Chuvas abundantes e ventos de sul a sudeste fortes");
        }
        else 
        {
            printf("Opção invalida!!");
        }
        break;
    default:
        printf("Opção invalida");
        break;
    }
    return 0;
}
