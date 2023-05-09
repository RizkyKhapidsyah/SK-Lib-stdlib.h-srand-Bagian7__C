#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int rand_num;

    //inisialisasi random seed
    srand(time(NULL));

    //menghasilkan 20 nomor acak antara 1 dan 100
    printf("Nomor acak dalam [1, 100]:\n");

    for (int i = 0; i < 20; i++) {
        rand_num = rand() % 100 + 1;
        printf("%d ", rand_num);
    }

    _getch();
    return 0;
}