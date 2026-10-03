#include<stdio.h>
void main(){
    int a[50][50],b[50][50],mul[50][50],i,j,r,c;
 printf("Enter the rows and columns: ");
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
        mul[i][j]=a[i][j]*b[i][j];
    }
}
printf("\nThe multiplication of the matrix is: \n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    printf("%d\t",mul[i][j]);
    }
    printf("\n");
}


}