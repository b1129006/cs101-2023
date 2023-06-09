#include <stdio.h>

void string_get_int(char a[]){
    for (int i = 0; i < sizeof(a); i++){
        if ((a[i] == 45) || ((a[i] >= 48) && (a[i] <= 57))){
            printf("%c", a[i]);
        }
    }
    printf("\n");
}

int main(){
    char a[] = "-99acbc";
    char b[] = "99acbc";
    char c[] = "ac-99bc";
    
    string_get_int(a);
    string_get_int(b);
    string_get_int(c);
}