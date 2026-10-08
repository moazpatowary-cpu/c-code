#include<stdio.h>
int main(){
    int i,n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int elements[n];
    printf("the elements are: ");
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    int temp,j;
     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(elements[i]>elements[j]){
                temp=elements[i];
                elements[i]=elements[j];
                elements[j]=temp;
            }
        }

     }
    for(i=0;i<n;i++){
        printf("%d ", elements[i]);
      }
}