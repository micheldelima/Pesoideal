#include <stdio.h>
#include <locale.h>
int main ()
{
    int i;
    float altura,peso_ideal;
    char sexo;
    //idioma em portugues
    setlocale(LC_ALL, "Portuguese");
    //coloca cor no software
    system("color 4F");
    //limpeza de buffer
    fflush(stdin);
    do
    {
        printf("===================\n");
        printf("=== Exercício 2 ===\n");
        printf("=== Peso ideal ====\n");
        printf("===================\n");
        //Pede os dados ao usuário
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite seu sexo (M ou F): ");
        scanf(" %c", &sexo);

        //condição para caso o usuário digite letras diferentes de m e f
        if (sexo != 'm' && sexo != 'f')
        {
            printf("*Sexo desconhecido!\n");
        }
    }

    //faça enquato sexo for diferente de m e f
    while (sexo != 'm' && sexo != 'f');

    //se sexo for m calcule a formula masculina
    if (sexo == 'm')
    {
        peso_ideal = (72.7*altura)-58;
    }

    //se sexo for f calcule a formula feminina
    else if (sexo == 'f')
    {
        peso_ideal = (62.1*altura)-44.7;
    }

    //mostra o resultado
    printf("===================\n");
    printf("Seu peso ideal: %.2f Kg\n", peso_ideal);
    printf("===================\n");
    return 0;
}
