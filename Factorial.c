#include<stdio.h>
int factr(int n){
    int sum;
    if(n==1){return 1;}
    else{
        sum=n*factr(n-1);
    }
    return sum;
}
void factl(int n){
    int sum=1,i;
    for(i = 1; i <= n; i++){
        sum=sum*i;
    }
    printf("The factorial for %d with iteration is %d\n",n,sum);
}
int main(){
    int n;
    printf("Enter a number.:\n");
    scanf("%d",&n);
    factl(n);
    int m = factr(n);
    printf("The factorial for %d with recusion is %d\n",n,m);
    return 0;
}