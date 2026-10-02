#include<stdio.h>
void main(){
    int a[40],b[50],c[90],i,n,m;
    printf("Enter the size of first array: ");
    scanf("%d",&n);
    printf("Enter the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the array : ");
scanf("%d",&m);
printf("Enter the size of sec array: ");
for(i=0;i<m;i++){
scanf("%d",&b[i]);
}
for(i=0;i<n;i++){
    c[i]=a[i];
}
for(i=0;i<m;i++){
    c[n+i]=b[i];
}
printf("Enter the merged array: ");
for(i=0;i<n+m;i++){
    printf("%d",c[i]);
}
}