#include<stdio.h>
int main(){
    int i,n;
    int temps[n];
    printf("number of temps: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temps[i]);
    }
    int temp_highest;
    for(i=0;i<n;i++){
        if(temps[i]>temp_highest){
        temp_highest=temps[i];

        }
    }
    printf("highest temperature:%d", temp_highest);




}
