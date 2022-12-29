#include<stdio.h>

int main(){
for(int i=1,j=0;i<=9;)
printf("%d*%d=%d\t",i,j,i*++j);
if(j==9){
i++;
j=0;
ptintf("\n");
}
}
}
