#include <stdlib.h>
#include<locale.h>

#define PI 3.1415
#define areaCirculo(r) ((PI)*(r)*(r))
#define perimetroCirculo(r) (2*(PI)*(r))
#define areaQuadrado(l) ((l)*(l))
#define perimetroQuadrado(l) (4*(l))
#define areaRetangulo(a,b) ((a)*(b))
#define perimetroRetangulo(a,b) ((2*(a))+(2*(b)))
#define areaTriangulo(b,h) (((b)*(h))/2)
#define perimetroTriangulo(b,c1,c2) ((b)+(c1)+(c2))


void lerDados (float *valor)
{
    printf ("Insira um valor");
    scanf ("%f", valor);

}


int main()
{
    float v1,v2,v3;
    int op;
    do
    {
        printf(">>> MENU TRIGONOMETRIA <<<\n");
        printf("1- Calcular area do circulo\n");
        printf("2- Calcular perimetro do circulo\n");
        printf("3- Calcular area do quadrado\n");
        printf("4- Calcular perimentro do quadrado\n");
        printf("5- Calcular area do retangulo\n");
        printf("6- Calcular perimetro do retangulo\n");
        printf("7- Calcular area do triangulo\n");
        printf("8- Calcular perimetro do circulo\n");
        printf("9- Sair!!!\n");
        scanf ("%i", &op);

        switch (op)
        {
           case 1:
                lerDados(&v1);
                printf("Área do círculo de raio %.2f: %.2f\n",v1,areaCirculo(v1));
                break;

           case 2:
                lerDados(&v1);
                printf("Perímetro do círculo de raio %.2f: %.2f\n",v1,perimetroCirculo(v1));
                break;

           case 3:
                lerDados(&v1);
                printf("Área do quadrado: %.2f\n",areaQuadrado(v1));
                break;

           case 4:
                lerDados(&v1);
                printf("Perímetro do quadrado: %.2f\n",perimetroQuadrado(v1));
                break;

           case 5:
                lerDados(&v1);
                lerDados(&v2);
                printf("Área do retângulo: %.2f\n",areaRetangulo(v1,v2));
                break;

           case 6:
                lerDados(&v1);
                lerDados(&v2);
                printf("Perímetro do retângulo: %.2f\n",perimetroRetangulo(v1,v2));
                break;

           case 7:
                lerDados(&v1);
                lerDados(&v2);
                printf("Área do triângulo: %.2f\n",areaTriangulo(v1,v2));
                break;

           case 8:
                lerDados(&v1);
                lerDados(&v2);
                lerDados(&v3);
                printf("Perímetro do triângulo: %.2f\n",perimetroTriangulo(v1,v2,v3));
                break;

        }

    } while (op!=9);





    return 0;
}
