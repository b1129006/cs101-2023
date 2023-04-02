/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x;
    printf("歡迎光臨長庚樂透彩購買機台\n");
    printf("請問你要買幾組樂透彩：\n");
    scanf("%d", &x);
    printf("以為您購買的 %d 組樂透組合輸出至lotto.txt", x);
    
    time_t curtime;
    time(&curtime);
    
    srand((unsigned) time(NULL));
    
    FILE* fp;
    fp = fopen("lotto.txt", "w+");
    fprintf(fp, "======== lotto649 ========\n");
    fprintf(fp, "= %s =\n", ctime(&curtime));
    for(int i = 0; i < 5; i++){
        fprintf(fp, "[%d]: ", i+1);
        if(i < x){
            for (int j = 0; j < 6; j++){
            fprintf(fp, "%d ", rand() % 70);
            }
            fprintf(fp, "%d", rand() % 10);
        } else{
            fprintf(fp, "-- -- -- -- -- -- --");
        }
        fprintf(fp, "\n");
    }
    fprintf(fp, "======== csie@CGU ========\n");
    return 0;
}
