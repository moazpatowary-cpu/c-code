#include<stdio.h>
int main(){
    int i,n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int elements[n];
    int position,value;
    printf("enter %d the elements:", n);
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    printf("enter position and value: ");
    scanf("%d %d",&position,&value);
    for(i=n-1;i>=position-1;i--){
        elements[i+1]=elements[i];

    }
    elements[position-1]=value;
    printf("after insertion: ");
    for(i=0;i<=n;i++){
        printf("%d ",elements[i]);
    }
    return 0;
}



