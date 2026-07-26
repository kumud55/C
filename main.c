#include<stdio.h>
int main(){
   int arr[100],a,pos,item, i;
   printf("Enter the number of elements in the array: ");
   scanf("%d",&a);
   printf("Enter array elements: ");
   for(i=0;i<a;i++){
       scanf("%d",&arr[i]);
   }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d",&pos);
    printf("Enter the element you want to insert: ");
    scanf("%d",&item);  
    for(i=a-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;
    printf("Array after insertion:\n");
    for(i=0;i<a+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
