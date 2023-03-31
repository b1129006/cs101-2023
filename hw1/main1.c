/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//main1
#include <stdio.h>

int main(){
    char a[] = "AABBBCCCCddd";
    int sum;
    for (int i = 0; i < sizeof(a)-1; i++){
        if (a[i] == a[i+1]){
            sum += 1;
        }else{
            sum += 1;
            printf("%c%d", a[i], sum);
            sum = 0;
        }
    }
}
