#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void questao1()
{
    int v1[5] = {1, 2, 3, 4, 5};  // Vetor 1
    int v2[5] = {6, 7, 8, 9, 10}; // Vetor 2
    int v3[5];
    int *p = &v1[0];
    int *p2 = &v2[0];
    int *p3 = &v3[0];

    printf(" Vetor 1 \n");

    for (int i = 0; i < 5; i++)
    {
        printf("[%d]", *(p + i));
    }

    printf("\n");
    printf(" Vetor 2 \n");

    for (int i = 0; i < 5; i++)
    {
        printf("[%d]", *(p2 + i));
    }

    printf("\n");
    printf(" Vetor 3 \n");

    for (int i = 0; i < 5; i++)
    {
        *(p3 + i) = *(p2 + i) + *(p + i);
        printf("[%d]", *(p3 + i));
    }
    printf("\n\n");
}

void questao2()
{
    int i;
    int j;
    int matriz[2][2];
    int *ptr = &matriz[0][0];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor da matriz em [%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("O valor da matriz em [%d][%d] = %d\n", i, j, *(ptr++));
        }
    }
}

void desafio()
{
    printf("Nao dei conta de fazer\n");
}

int main()
{
    int menu;

    while (true)
    {
        printf("Escolha qual questao deseja consultar: \n");
        printf("1. Questao 1\n");
        printf("2. Questao 2\n");
        printf("3. Desafio\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            questao1();
            break;
        case 2:
            questao2();
            break;
        case 3:
            desafio();
            break;
        case 4:
            printf("Saindo do programa.\n");
            return 0;
        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
        }
    }

    return 0;
}
