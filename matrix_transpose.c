#include<stdio.h>
void main(){
int arr[50][50],r,c,i,j;
printf("Enter the rows and columns: ");
scanf("%d %d",&r,&c);
printf("Enter the matrix: ");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("\nThe transpose of the matrix is: \n");
for(j=0;j<c;j++){
    for(i=0;i<r;i++){
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
}