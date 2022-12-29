#include <stdio.h>
int rows = 5;


void print_spaces(int r){
    int i;
    for(i = 1;i<=(rows-r)*2;i++){
        printf(" ");
    }
    
}

void print_stars(int r){
    int j;
    for(j = 1;j<=r*(2)-1;j++){
        printf("* ");
    }
    printf("\n");
}

int main() {
    int i;
    for(int i = rows;i>=1;--i){
        print_spaces(i);
        print_stars(i);
    }
    return 0;
}
