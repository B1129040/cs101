#include <stdio.h>
int get_digit(int n){
    int reverse=0;
    while(n>0){
        reverse*=10;
        reverse+=n%10;
        n/=10;
    }
    return reverse;
}
int main(){
    int n=1234;
    int sum=0;
    sum=get_digit(n);
    printf("%d\n",sum);
    return 0;
}
