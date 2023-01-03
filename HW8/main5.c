#include <stdio.h>

void print_spaces(int r){
    int i;
    for(i=0;i<r;i++){
        printf(" ");
    }
}
void print_stars(int r){
    int i;
    for(i=0;2*r-1>i;i++){
        printf("*");
    }
    printf("\n");
}
void print_top(){
    for(int r=6;r>3;r--){
        print_spaces(r);
        print_stars(7-r);
    }
    for(int r=6;r>1;r--){
        print_spaces(r);
        print_stars(7-r);
    }    
    for(int r=6;r>=0;r--){
        print_spaces(r);
        print_stars(7-r);
    }    
}
void print_truck(){
    for(int i=0;i<5;i++){
        print_spaces(6);
        print_stars(1);
    }
}
int main(){
    print_top();
    print_truck();
}
