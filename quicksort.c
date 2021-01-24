#include <stdio.h>

# define N 10

void qsort2( int *a, int n); //quick sort array a with n elements 
int partition(int *a, int, int, int ); //our pivot value and reorder subarray
int pivot(int*a, int, int, int); //find value to split the array

void print(int*a); //to print our arrray

int main(void) 
{
  int a[N] = {4,65,2,-31,0,99,2,83,287,1};
   printf("Hello World!");
   return 0;
}

void print(int *a)
{
  for(int i = 0; i < N; ++i)
    printf(" %d",a[i]);
}
void qsort( int *a, int n) //quick sort array a with n elements
{

}