/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fp;
    int arr_write[] = {1, 2, 3};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};
    
    fp = fopen("a.bin", "wb+");
    fwrite(arr_write, sizeof(int), 1, fp);
    fread(arr_write, sizeof(int), 1, fp);
    
    for(int i = 0; i < 3; i++){
        printf("%d", arr_write[i]);
    }
    fclose(fp);
    return 0;
}