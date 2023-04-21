#include <stdio.h>
void add(int a,int b,int *sum);
int main() {
   int a, b, sum;
   printf("enter the value a\n");
   scanf("%d", &a);
   
   printf("enter the value b\n");
   scanf("%d", &b);
   add(a, b, &sum);
   
   printf("sum of: %d & %d : %d \n", a,b,sum);
   
    return 0;
}
    void add(int a, int b,int *sum){
    *sum=a+b;
    }
