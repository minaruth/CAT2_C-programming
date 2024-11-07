#include <stdio.h>

int main(){
    int scores[4][2]={
        {65,92},
        {84,72},
        {35,70},
        {59,67}
    };

    int matrix_one[2][2];
    int matrix_two[2][2];

    for(int k=0;k<2;k++) {
        for(int r=0;r<2;r++) {
            matrix_one[k][r]=scores[k][r];
        }
    }

    for(int k=2;k<4;k++) {
        for(int r=0;r<2;r++) {
            matrix_two[k-2][r]=scores[k][r];
        }
    }

    printf("matrix_one:\n");
    for(int k=0;k< 2;k++) {
        for(int r=0;r<2;r++) {
            printf("%d ", matrix_one[k][r]);
        }
        printf("\n");
    }

    printf("matrix_two:\n");
    for(int k=0;k<2;k++) {
        for(int r=0;r< 2;r++) {
            printf("%d ", matrix_two[k][r]);
        }
        printf("\n");
    }

    return 0;
}
