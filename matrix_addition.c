#include<stdio.h>
int main(){
    int a[50][50],b[50][50],sum[50][50];
    int i,j,r,c;
    printf("Enter the row and columns: ");
scanf("%d %d",&r, &c);
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
        sum[i][j]=a[i][j]+b[i][j];
    }
}
printf("\nThe sum of the matrix is: \n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\t",sum[i][j]);
    }

printf("\n");
}
return 0;
}