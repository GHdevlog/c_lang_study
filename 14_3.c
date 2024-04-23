#include <stdio.h>

int main(void){
    char animal[5][20];
    int i;
    int count;

    count = sizeof(animal)/sizeof(animal[0]);
    for (i=0;i<count;i++){
        printf("%d 번째 입력 : ", i+1);
        scanf("%s", animal[i]);
    }

    for (i=0;i<count;i++){
        printf("%s\n", animal[i]);
    }
    
    return 0;
}