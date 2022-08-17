#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

float volume_cilindro(float raio, float altura)
{
    return pi*raio*raio*altura;
}

int main()
{
    float r, y, v;

    printf("\n========= C A L C U L O  D O  V O L U M E ===========\n");

    printf("\n>>> Digite o raio do cilindro: ");
    scanf("%f", &r);

    printf("\n>>> Digite a altura do cilindro: ");
    scanf("%f", &y);

    v = volume_cilindro(r, y);

    printf("\n=====================================================\n");

    printf("\n>>> VOLUME DO CILINDRO: %.2f", v);

    return 0;

}
