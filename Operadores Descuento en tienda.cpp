/* Cree un programa que de descuento en una tienda, la tienda ofrece un 15% sobre el total de la compra,
 * un cliente desea saber cuanto sera a pagart al final de la compra*/

#include <iostream>
#include <cmath>
#include <cstdio>


int main() {
    double total_compra, descuento, total_descontado ;

    printf(" Digite el total de la compra realizada en el dia: \n");
    scanf("%lf", &total_compra);

    descuento = total_compra*0.15;
    total_descontado = total_compra  - descuento;

    printf("El valor total de la compra con descuento es: %.2lf$ ", total_descontado);



    return 0;
}
