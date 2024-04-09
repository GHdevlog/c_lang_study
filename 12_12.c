#include <stdio.h>
#include <string.h>

int main(void){
    char str1[80] = "pear" ; 
    char str2[80] = "peach";

    printf("사전에서 뒤에 나오는 단어 : ");
    if (strcmp(str1, str2)){
        printf("%s\n", str1);
    }else{
        printf("%s\n", str2);
    }

    return 0;
}
