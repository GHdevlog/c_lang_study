#include <stdio.h>
#include <string.h>

int main(void){
    char str1[80], str2[80];
    char *resp;

    printf("두개의 과일 이름: ");
    scanf("%s%s", str1, str2);
    if (strlen(str1)>strlen(str2)){
        resp = str1;
    }else{
        resp = str2;
    }

    printf("%s",resp);
    return 0;
}