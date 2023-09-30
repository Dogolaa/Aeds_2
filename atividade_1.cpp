#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void questao1()
{
    int v1[5] = {1, 2, 3, 4, 5};  // Vetor 1
    int v2[5] = {6, 7, 8, 9, 10}; // Vetor 2
    int v3[5];
    int *p = &v1[0];
    int *p2 = &v2[0];
    int *p3 = &v3[0];

    cout << " Vetor 1 " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "[" << *(p + i) << "]";
    }

    cout << "" << endl;
    cout << " Vetor 2 " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "[" << *(p2 + i) << "]";
    }

    cout << "" << endl;
    cout << " Vetor 3 " << endl;

    for (int i = 0; i < 5; i++)
    {
        *(p3 + i) = *(p2 + i) + *(p + i);
        cout << "[" << *(p3 + i) << "]";
    }
    cout << "" << endl;
    cout << "" << endl;
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
            cout << "Digite o valor da matriz em [" << i << "]"
                 << "[" << j << "]" << endl;
            cin >> matriz[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "O valor da matriz em [" << i << "]"
                 << "[" << j << "]"
                 << " = " << *(ptr++) << endl;
        }
    }
}

void desafio(){
    cout << "Nao dei conta de fazer" << endl;
}

int main()
{
    int menu;

    while (true)
    {
        cout << "Escolha qual questao deseja consultar: " << endl;
        cout << "1. Questao 1" << endl;
        cout << "2. Questao 2" << endl;
        cout << "3. Desafio" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> menu;

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
            cout << "Saindo do programa." << endl;
            return 0;
        default:
            cout << "Opcao invalida. Tente novamente." << endl;
            break;
        }
    }

    return 0;
}
