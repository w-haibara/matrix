#include<stdio.h>

void makeMat(char name,int A[3][3]);


int main(void){
    int A[3][3];
    int B[3][3]; 

    makeMat('A',A);
    makeMat('B',B);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",A[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",B[i][j]);
        }
        printf("\n");
    }



    return 0;
}

void makeMat(char name,int mat[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%c[%d][%d]=",name,i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    printf("\n"); 
    }
}

