#include<stdio.h>
int main(){
    int n,i;
    int elements[10];
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("the elements are: \n");
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    printf("even:");
    for(i=0;i<n;i++){
        if(elements[i]%2 == 0){
                printf("%d", elements[i]);
    }
    }
    printf("\n0dd:");
    for(i=0;i<n;i++){
        if(elements[i]%2 != 0){
                printf("%d ", elements[i]);
        }
    }
    }

