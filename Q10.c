#include <stdio.h>

int main (void){
    unsigned char n, h, m,data[8];
    int i=0;
    scanf("%d", &n);

    for (i=0;i<8;i++)
        data[i] = 0;

    i = 0;
    while(n != 0){
        m = n % 2;
        h = n / 2;
        n = h;

        if(m == 1){
            data[i] = 1;
        }else{
            data[i] = 0;
        }
        i++;
    }

    i = 7;
    while(i >= 0){
        if (data[i] == 0)
            printf("0");
        else
            printf("1");
        i--;

    }
    printf("\n");
}