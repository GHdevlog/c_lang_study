#include <stdio.h>

int main(void){
    printf("%p\n", "apple"); 
    printf("%p\n", "apple" + 1); 
    printf("%c\n", *"apple"); 
    printf("%c\n", *("apple"+1)); 
    printf("%c\n", "apple"[2]); 
    
    return 0;
}