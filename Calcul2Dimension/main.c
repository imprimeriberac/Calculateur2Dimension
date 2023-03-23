#include <stdio.h>
#include <stdlib.h>

int main() {
    int hauteur, largeur, ppp;
    float hauteur_en_cm, largeur_en_cm;

    printf("Hauteur en pixel: ");
    scanf("%d", &hauteur);

    printf("Largeur en pixel: ");
    scanf("%d", &largeur);

    printf("Pixel par pouce: ");
    scanf("%d", &ppp);

    hauteur_en_cm = (hauteur * 2.54) / ppp;
    largeur_en_cm = (largeur * 2.54) / ppp;



    printf("%.2fcm maximum pour la hauteur et %.2fcm maximum pour la largeur . . .", hauteur_en_cm, largeur_en_cm);

     getchar();
     system("pause");

    return 0;
}
