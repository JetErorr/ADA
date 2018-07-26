#include<stdio.h>
// void fiboi(int n){
//     printf("\n");
//     int a[n];
//     a[0]=1;
//     a[1]=1;
//     for(int i = 2; i < n; i++){
//         a[i]=a[i-2]+a[i-1];
//     }
//     for(int i = 0;i<n;i++)
//         {printf("%d\n",a[i]);}
//     printf("----\n%d <-Is the Fibonacci number at %d",a[n-1],n);
// }
int fiboi(int n)
{
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }           
    return b;
}
int fibor(int x) 
{
    if (x < 2){
    return x;
    }     
    return (fibor (x - 1) + fibor (x - 2));
}
int main(){
    int n;
    printf("Enter a number.:\n");
    scanf("%d",&n);
    int o = fiboi(n);
    printf("The (I) fibonacci value at %d is %d\n",n,o);
    int m = fibor(n);
    printf("The (R) fibonacci value at %d is %d\n",n,m);
    return 0;
}