//Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(r!=c){
        printf("False");
        return 0;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=a[j][i]){
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}
