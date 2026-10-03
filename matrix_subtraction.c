#include<stdio.h>
void main(){
    int a[50][20],b[90][20],sub[20][10],i,j,r,c;
    printf("Enter the row and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter the first matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
printf("\nThe sub of the matrix is: \n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\t",sub[i][j]);
    }
    printf("\n");
}
}