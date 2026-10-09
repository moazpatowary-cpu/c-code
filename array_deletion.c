#include<stdio.h>
int main(){
    int i,n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int elements[n];
    int position;
    printf("enter %d the elements:", n);
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    printf("enter position you want to delete: ");
    scanf("%d",&position);
    for(i=position-1;i<n-1;i++){
        elements[i]=elements[i+1];

    }

    printf("after deletion: ");
    for(i=0;i<n-1;i++){
        printf("%d ",elements[i]);
    }
    return 0;
}

