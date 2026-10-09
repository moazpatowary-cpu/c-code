#include<stdio.h>
int main(){
    int i,n;
    int marks[n];
    printf("enter number of students: ");
    scanf("%d",&n);
    printf("enter marks of student: \n");
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    int highest=marks[0];
    int lowest=marks[0];
    for(i=0;i<n;i++){
        if(highest<marks[i]){
            highest=marks[i];
        }
    }
    for(i=0;i<n;i++){
    if(lowest>marks[i]){
            lowest=marks[i];


    }

}
    printf("Highest mark = %d\n", highest);
    printf("Lowest mark = %d\n", lowest);

}
