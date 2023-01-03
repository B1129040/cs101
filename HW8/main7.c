#include <stdio.h>
int add(int num){
    int sum=0,minus=1;
    if(num<0){
        minus=-1;
        num=-num;
    }
    while(num>0){
        if(num>10){
            sum+=num%10;
            num=num/10;
        }
        else{
            sum+=num*minus;
            break;
        }
    }
    return sum;
}
int main(){
    int a=-999;
    int b=999;
    int ans=add(a);
    printf("%d\n",ans);
    return 0;
}
