#include <stdio.h>
int main(void) {    
    int monto=0;
    int billete1=0;
    int billete5=0;
    int billete10=0;
    int billete50=0;
    int billete100=0;
 
    printf("ingresar un mono de biyuya entre 20 y 5000");
    scanf("%d", &monto);
    if (monto<20) {
        printf("retire un monto mayor a 20 dolares");
        return 1;
    }
    else if (monto>5000) {
        printf("retire un monto menor a 5000 dolares");
        return 2;
    }
    for (billete100=0; monto >= 100; billete100++) {
        monto = monto - 100;
    }
    for (billete50=0; monto >= 50; billete50++)
    {
        monto = monto - 50;

    }
    for (billete10=0; monto >= 10; billete10++)
    {
        monto = monto - 10;

    }
    for (billete5=0; monto >= 5; billete5++)
    {
        monto = monto - 5;

    }
    for (billete1=0; monto >= 1; billete1++)
    {
        monto = monto - 1;

    }

    printf ("billetes de 1 " "%d", billete1);
    printf ("billetes de 5 " "%d", billete5);
    printf ("billetes de 10 " "%d", billete10);
    printf ("billetes de 50 " "%d", billete50);
    printf ("billetes de 100 " "%d", billete100);
    return 0;
}


    