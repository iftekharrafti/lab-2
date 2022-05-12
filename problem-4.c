#include <stdio.h>


int main() {
    int n, anton, danik, timer;
    anton = danik = timer = 0;

    char s;

    scanf("%d", &n);


    while (n >= timer) {
        s = getchar();

        if (s == 'A') {
            anton++;
        }

        if (s == 'D') {
            danik++;
        }

        timer++; //updater
    }


    if (anton > danik) {
        printf("Anton\n");
    }

    if (anton < danik) {
        printf("Danik\n");
    }

    if (anton == danik) {
        printf("Friendship\n");
    }
    return 0;
}