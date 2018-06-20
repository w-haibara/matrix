#include<stdio.h>

int main(void){

    int A[3][3];
    int B[3][3]; 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("A[%d][%d]=",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    printf("\n"); 
    }
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("B[%d][%d]=",i+1,j+1);
           scanf("%d",&B[i][j]);
       }
    printf("\n"); 
    }
    
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
