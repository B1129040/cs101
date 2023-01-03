#include <stdio.h>

int round_func(float i) {
    long j=i*10,ans;
    j%=10;
    if(j>=5) {
        ans=i+1;
    }else {
        ans=i;
    }
    printf("%ld",ans);
}

int main()
{
    double i=9.2344567789;
    round_func(i);

    return 0;
}
