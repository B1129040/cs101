#include <stdio.h>

void get_binary(int n){
    int count=0;
    float j=(float)n;
    while(j>=1){
        count++;
        j=j/(float)16;
    }
    while(count>0){
        for(int i=0;i<4;i++){
            j*=2;
            if(j>=1){
                j-=1;
                printf("%d",1);
            }
            else{
                printf("%d",0);
            }
        }
        count--;
        printf(" ");
    }
    printf("\n");
}
int main(){
    int i =6;
    int count;
    get_binary(i);
    return 0;
}
