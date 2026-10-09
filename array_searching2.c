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
    int key;
    printf("enter number you want to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(elements[i]==key){
                count++;
    }
    }
    printf("%d is preset %d times", key, count);

    return 0;
}
