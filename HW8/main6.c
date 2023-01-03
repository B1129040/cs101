#include <stdio.h>

void print_spaces(int r){
    int i;
    for(i=0;i<r-1;i++){
        printf(" ");
    }
}
void print_stars(int r,int rows){
    int i;
    for(i=0;i<2*(rows-r)+1;i++){
        printf("*");
    }
    printf("\n");
}
void print_house(n){
    for(int j=0;j<2*n-1;j++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("*");
        for(int j=0;j<2*n-3;j++){
            printf(" ");
        }
        printf("*\n");
    }
    for(int j=0;j<2*n-1;j++){
        printf("*");
    }
    printf("\n");
}
int main(){
    int n=4;
    for(int i=n;i>0;--i){
        print_spaces(i);
        print_stars(i,n);
    }
    print_house(n);
    return 0;
}
