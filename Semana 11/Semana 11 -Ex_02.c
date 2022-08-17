#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

float comp_arco(float raio, float ang)
{
    return pi*raio*ang/180;
}

int main()
{
    float r, a, comp;

    printf("\n========= C A L C U L O  D O  C O M P R I M E N T O  D E  A R C O ===========\n");

    printf("\n>>> Digite o raio da circunferencia: ");
    scanf("%f", &r);

    printf("\n>>> Digite o angulo central em graus: ");
    scanf("%f", &a);

    comp = comp_arco(r, a);

    printf("\n=============================================================================\n");

    printf("\n>>> COMPRIMENTO DO ARCO: %.2f", comp);

    return 0;

}
