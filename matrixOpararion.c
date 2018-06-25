#include<stdio.h>

#define DEF_MAT(MAT) mkMat(#MAT,MAT)

void printM(int mat[3][3]); 
void mkMat(char name[], int A[3][3]);

int main(void){
    int A[3][3];
    int B[3][3]; 

    DEF_MAT(A);
    DEF_MAT(B);

    printf("\nAxB=\n");

    int outMat[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            outMat[i][j]=0;
        }
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){ 
                outMat[i][j] += A[i][j]*B[k][i];
            }
        }
    printf("\n"); 
    }

    printM(outMat);

    return 0;
}

void printM(int mat[3][3]){
    for(int i=0;i<3;i++){
        printf("[");
        for(int j=0;j<3;j++){
            printf(" %d",mat[i][j]);
        }
        printf(" ]\n");
    }
    
    printf("\n");
}

void mkMat(char name[],int mat[3][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%s[%d][%d]=",name ,i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    printf("\n"); 
    }
    printM(mat);
}
