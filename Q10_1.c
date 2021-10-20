#include <stdio.h>

int main (void){
    char data[] ="00000000";
    int i,j,n, h, m;

    scanf("%d", &n);

    i = 0; j = 7;
    while(n != 0){
        m = n % 2;
        h = n / 2;
        n = h;

        if(m == 1){
            data[j] = '1';
        }else{
            data[j] = '0';
        }
        i++;
        j--;
    }
    printf("%s\n",data);
}