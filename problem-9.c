#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);

    if(x>=0 && x<40){   // 0-39
        int extra = 40 - x;
        printf("%d\n",extra);
    }
    else if(x>=40 && x<70){ //40-69
        int extra = 70 - x;
        printf("%d\n",extra);
    }
    else if(x>=70 && x<90){ // 70-89
        int extra = 90 - x;
        printf("%d\n",extra);
    }
    else if(x>=90 && x<=100){   // 90-100
        printf("expert");
    }
    return 0;
}