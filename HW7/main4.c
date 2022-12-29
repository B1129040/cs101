#include<stdio.h>

int main(){
int i=12345;
int t=0;
int d=0;

if(i>=1000){
t=i%10000/1000;
}
d=i%10;
i-=t*1000;
i-=d;
i+=d*1000;
i+=t;
printf("i=%d\n",i);
return 0;
}
