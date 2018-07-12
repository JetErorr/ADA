#include <stdio.h>
int c, first, last, middle, n, search, array[100],i;
void swap(int a, int b){
    int temp =array[a];
    array[a]=array[b];
    array[b]=temp;
    for(i=0;i<n;i++){printf("%d \t",array[i]);}
}
int main(){

    for(i=0;i<100;i++) {
            printf("\nPass: %d",i);
            for(j=i+1;j<100;j++) {
                if(array[i]>array[j]) {
                    swap(i,j);
                }
            }

    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
    scanf("%d",&array[c]);
    printf("Enter value to find\n");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first+last)/2;
    while (first <= last) {
    if (array[middle] < search)
        first = middle + 1;    
    else if (array[middle] == search) {
        printf("%d found at location %d.\n", search, middle+1);
        break;
    }
    else
        last = middle - 1;
    middle = (first + last)/2;
    }
    if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);
    return 0;   
}