#include<stdio.h>
int main(){
  int arr[4][4], temp;
  printf("Enter the elements of the matrix: ");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      scanf("\n%d ", &arr[i][j]);
    }
  }


  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d   ", arr[i][j]);
    }
      printf("\n");
  }

   for (int i = 0; i < 4; i++) {
    for (int j = 0; j < i; j++) {  // Only swap when i < j
      temp = arr[i][j];            //otherwise at last we will get the same matrix due to double swapping 
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d   ", arr[i][j]);
    }
      printf("\n");
  }

}