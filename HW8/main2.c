#include <stdio.h>
int main(){
    int i =15;
    int count=0;
    for(int j=1;i!=0;j++){
        if(i%2==1){
            count++;
            i-=1;
        }
        i=i/2;
    }
    printf("æ%då1\n",count);
    return 0;
}
