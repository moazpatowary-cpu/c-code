#include<stdio.h>
int main(){
    int i,n;
    int count;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int elements[n];
    printf("the %d elements are: ", n);
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
     for(i=0;i<n;i++){
        if(elements[i]<0){
            elements[i]=0;
        }
     }
     for(i=0;i<n;i++){
        printf("%d ", elements[i]);
     }
}


