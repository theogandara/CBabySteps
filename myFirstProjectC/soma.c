#include <stdio.h>

int main()
{
    float value1, value2;
    float media;

    printf("Descubra se voce está aprovado !\n");
    printf("--- Digite duas notas e obtenha a media entre elas \n \n");

    printf("Digite a primeira nota: \n");
    scanf("%f", &value1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &value2);

    media = (value1 + value2) / 2.0;

    if (media >= 7.0)
    {
        printf("Parabéns, você foi aprovado !!\n \n");
    }
    else
    {
        printf("Infelizmente você não foi aprovado.\n \n");
    };
}