#include <stdio.h>

int main(){
    int ary[3] = {10,20,30};
    int *pa = ary;
    int i;

    for (i=0;i<3;i++){
        printf("%d", ary[i]);
    }

    return 0;
}