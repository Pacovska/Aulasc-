#include <stdio.h>

int main()
{
    int excelente = 0, proficiente = 0, suficiente = 0, insuficiente = 0, total = 0;
    int continua = 0;
    char nota[2];
    
    while (continua == 0)
    {
        printf("\nAs notas estao separadas da seguinte maneira:");
        printf("\nExcelente \nProficiente \nSuficiente \nInsuficiente \n");
        printf("Informe qual a nota, com a primeira letra das informadas acima: ");
        scanf("%1s", nota);
        switch (nota[0])
        {
        case 'e':
            excelente++;
            total++;
            break;
        case 'p':
            proficiente++;
            total++;
            break;
        case 's':
            suficiente++;
            total++;
            break;
        case 'i':
            insuficiente++;
            total++;
            break;
        default:
            printf("\nOpcao invalida\n\n");
            break;
        }
        if (total >= 3) 
        {
            printf("Deseja adicionar mais notas? [0 = Sim/1 = Nao]  ---> ");
            scanf("%d", &continua);
        }
    }

    if (insuficiente > 0) 
    {
        printf("Insuficiente");
    } 
    else if (excelente >= total / 2) 
    {
        printf("Excelente");
    } 
    else if (proficiente >= total / 2) 
    {
        printf("Proficiente");
    } 
    else if (suficiente >= total / 2)
    {
        printf("Suficiente");
    }

    return 0;
}
