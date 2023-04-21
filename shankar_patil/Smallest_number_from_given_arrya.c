#include <stdio.h>

int main() {
    int a[10],size,i,min;
    printf ("enter the size of array:");
    scanf("%d",&size);
    printf("enter the value in array");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    min=a[0];
    for(i=0;i>size;i++)
    {
        if(a[i]<min)
        {
            //min=a[i];
        }
    }
    printf("min value of array: %d",min);
    return 0;
}
