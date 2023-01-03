#include <stdio.h>

void print_spaces(int r){
    int j;
    for(j=0;j<r-1;j++){
        printf(" ");
    }
}
void print_stars(int r,int rows){
    int j;
    for(j=0;j<2*(rows-r)+1;j++){
        printf("*");
    }
    printf("\n");
}

int main(){
    int i=4;
    int j=0;
    for(j=1;j<i+1;j++){
        if(j==i)continue;
        print_spaces(j);
        print_stars(j,i);
    }
    for(j=i;j>0;--j){
        print_spaces(j);
        print_stars(j,i);
    }
    return 0;
}
