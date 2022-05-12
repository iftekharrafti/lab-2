#include <stdio.h>

int main(){
    int abc;
    scanf("%d", &abc);

    int vagsesh = abc % 10;
    int vagfol = abc / 10;

    int c = vagsesh;

    vagsesh = vagfol % 10;
    vagfol = vagfol / 10;

    int b = vagsesh;
    int a = vagfol;

    int bca = b*100 + c*10 + a;
    int cab = c*100 + a*10 + b;
    printf("%d\n", abc+bca+cab);
    
    return 0;
}