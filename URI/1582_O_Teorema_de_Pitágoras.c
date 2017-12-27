#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*int mdc(int n1, int n2){

    int resto = n1 % n2;
    while(resto!=0){

        n1 = n2;
        n2 = resto;
        resto = n1 % n2;
    }
    return n2;
}*/

int calc_pitagora(int n1, int n2, int n3){

    int result = n1*n1 + n2*n2;
    if (result == (n3*n3))
        return 1;
    return 0;
}


int is_pitagora(int n1, int n2, int n3){
    if((n1 > n2) && (n1 > n3))
        return calc_pitagora(n2, n3, n1);

    if((n2 > n1) && (n2 > n3))
        return calc_pitagora(n1, n3, n2);

    return calc_pitagora(n1, n2, n3);

}

int calc_mdc(int n1, int n2, int n3){
    int div, mdc = 1;

    for(div = 2; div <= n1; div ++){
        if((n1 % div == 0) && (n2 % div == 0) && (n3 % div == 0))
            mdc = div;
    }
    return mdc;
}


int main()
{

    int n1, n2, n3, mdc, result;


    while( scanf("%d %d %d", &n1, &n2, &n3) != EOF){

        result = is_pitagora(n1, n2, n3);
        if (!result){
            printf("tripla\n");
        } else {

            mdc = calc_mdc(n1, n2, n3);

            if (mdc != 1)
                printf("tripla pitagorica\n");
            else
                printf("tripla pitagorica primitiva\n");

        }

    }
    return 0;
}
