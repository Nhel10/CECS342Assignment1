/* Program that uses merge sort in C */

#include <stdio.h>

#define N  10 //Size of our array

void msort( int *a, int n ); // merge sort array a with n elements 
void merge(int * a, int, int, int ); //will help us merge the two broken sub-arrays  
void mergeS(int *a, int ,  int ); //Break down the array into two sub-array parts 
void print(int *a); //to display our array

int main() 
{
 
  printf("Hey you, thats right !\n");
  int  a[N] = {4,65,2,-31,0,99,2,83, 287,1};  // given array

  print(a);

  printf("\nSorting array\n");
  return 0;
}

void print(int *a)// display array;
{
  for(int i = 0; i < N ; ++i) //print every element of our array
    printf(" %d",a[i]);

}

void msort( int *a, int n )
{

}

void mergeS(int *a, int left, int right)// left for index 0 and right for last index of subarray
{

} 

/* left = index 0, middle = center index of sub-array, right = last index of sub-array*/
void merge( int *a, int left, int middle, int right)
{

}