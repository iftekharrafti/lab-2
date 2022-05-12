#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n, &m);

    for(int i=1; i<=n; i++){
        if(i%4==0){
            printf("#");
        }
        for(int j=1; j<=m-1; j++){
            if(i%2==1){
                printf("#");
            }
            else if(i%4==0){
                printf(".");
            }
            else if(i%2==0){
                printf(".");
            }
        }
        if(i%2==1){
                printf("#");
            }
        if(i%2==0 && i%4!=0){
            printf("#");
        }
        
        printf("\n");
    }
    return 0;
}