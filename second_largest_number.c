#include<stdio.h>
int main(){
    int i,n;
    printf("enter mnumber of elements: ");
    scanf("%d",&n);
    int elements[n];
    printf("the elements are: ");
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    int second;
    int largest;
     largest=second=elements[0];
      for(i=0;i<n;i++){
        if(elements[i]> largest){
            second=largest;
            largest=elements[i];
        }
      else if(elements[i]<largest && elements[i]> second){
        second=elements[i];
      }
    }
    printf("%d is second largest", second);

    return 0;
}