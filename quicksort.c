#include <stdio.h>

# define N 10

void qsort2( int *a, int n); //quick sort array a with n elements 
void quick_sort(int *a, int, int );// to recursively call quicksort 
int partition(int *a, int, int, int ); //our pivot value and reorder subarray
int pivot(int*a, int, int, int); //find value to split the array

void print(int*a); //to print our arrray

void swapf(int * a, int * b);// swap values

int main(void) 
{
  int a[N] = {4,65,2,-31,0,99,2,83,287,1};
   printf("Hello World!");
   qsort2(a, N);
   print(a);
   return 0;
}

void quick_sort( int * a, int left, int right) // left side of subarray right side of subarray 
{
  
  int c = 3;
  if ( (right|| left) <= c)
    printf("\nHello darkenss my old friend\n");
  else
  {
    int pivot_index = pivot(a, left, right, right/2);

    quick_sort(a, left, pivot_index -1 ); // break array to first element up to pivot index
    quick_sort(a,pivot_index + 1, right); // second part of subarray starting from ppivot to last index
  }

}

int pivot(int *a, int left, int right, int center)
{
  if(a[left] > a[right])
  {
    if(a[right] > a[center])
      return right;
    else if(a[left] > a[center])
      return center;
    else 
      return left;
  }
  else
  {
    if(a[left] > a[center])
      return left;
    else if(a[right] > a[center])
      return center;
    else
      return right;
  }
}

void print(int *a)
{
  for(int i = 0; i < N; ++i)
    printf(" %d",a[i]);
}

int partition( int * a, int left, int right, int pivot_index)
{
  int pivot_value = a[pivot_index];
  swapf(&a[pivot_index],&a[right]);

  int store = left;

  for(int i = left; i < right; ++i)
  {
    if(a[i] <= pivot_value)
    {
      swapf(&a[store],&a[i]);
      ++store;
    }
  }

  swapf(&a[right], &a[store]);
  return store;
}

void qsort2( int *a, int n) //quick sort array a with n elements
{
  quick_sort(a, 0, n);
}

void swapf(int * a, int *b)//swap value function 
{
  int temp = *a;
  *a = *b;
  *b = temp;

}

