#include<stdio.h>
int ele[5];
int i,j,n=5;
void swap(int a,int b){
    int temp = ele[a];
    ele[a]=ele[b];
    ele[b]=temp;
    printf("\n\tSwapped %d and %d: ",ele[a],temp);
    for(i=0;i<n;i++){printf("%d \t",ele[i]);}
}
int main(){
    int i,j;
    printf("Enter %d elements: \n\n",n+1);
    for(i=0;i<n;i++) {
        scanf("%d",&ele[i]);
    }
    printf("\tYou entered the elements: \n\n\t\t\t");
    for(i=0;i<n;i++) {
        printf("%d \t",ele[i]);
    }
// Sorting
    for(i=0;i<n;i++) {
        // printf("\nPass: %d",i);
        for(j=i+1;j<n;j++) {
            if(ele[i]>ele[j]) {
                swap(i,j);
            }
        }
        // printf("\nPass %d complete.\n",i);
    }
}