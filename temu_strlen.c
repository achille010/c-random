#include <stdio.h>

void sanitize(char *str){
    while(*str){
        if(*str == '\n'){
            *str = '\0';
        }
        str ++;
    }
}

size_t temu_strlen(const char *ptr){
    const char *start = ptr;
    
    while(*ptr){
        ptr ++;
    }
    
    return ptr - start;
}


int main(){
    char s[1000];
    printf("Input a string: ");
    fgets(s, 999, stdin);
    
    sanitize(s);
    
    printf("\nThe input string has %zu characters.", 
    temu_strlen(s));
    
    return 0;
}

