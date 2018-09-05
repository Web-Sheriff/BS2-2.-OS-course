#include <stdio.h>

void task1(){
  int* pc;
 int c;
 c=22;
 printf("Address of c:%d\n",&c);
 printf("Value of c:%d\n\n",c);
 pc=&c;
 printf("Address of pointer pc:%d\n",pc);
 printf("Content of pointer pc:%d\n\n",*pc);
 c=11;
 printf("Address of pointer pc:%d\n",pc);
 printf("Content of pointer pc:%d\n\n",*pc);
 *pc=2;
 printf("Address of c:%d\n",&c);
 printf("Value of c:%d\n\n",c);
} 

void task2(int* arr, int length){
  int i = 0;
  int j = 0;
  printf("Your array before sorting\n");
  for (i = 0; i < length; i++)
    printf("%d ",arr[i]);
  
  for (i = 0; i < length-1; i++) {
    for (j = 0; j < length-i-1;j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  
  printf("\nYour array after bubbleSorting\n");
  for (i = 0; i < length; i++)
    printf("%d ",arr[i]);
}

int partition (int arr[], int left, int right) 
{ 
    int pivot = arr[right];   
    int index = (left - 1);
    int temp = 0;

    for (int i = left; i <= right - 1; i++) 
    { 
        if (arr[i] <= pivot) 
        { 
            index++;
            temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        } 
    } 
    temp = arr[index+1];
    arr[index+1] = arr[right];
    arr[right] = temp;
    index++;
    return (index); 
} 
  
void quickSort(int arr[], int left, int right) 
{ 
    if (left < right) 
    { 
        int pivot = partition(arr, left, right); 
        quickSort(arr, left, pivot - 1); 
        quickSort(arr, pivot + 1, right); 
    }
    else{
    }
} 



int main(){
  //TASK1:
  task1();
  //THE RESULT AFTER TASK1:
  // Address of c:-221854284
  // Value of c:22
  // Address of pointer pc:-221854284
  // Content of pointer pc:22
  // Address of pointer pc:-221854284
  // Content of pointer pc:11
  // Address of c:-221854284
  // Value of c:2

  //TASK2:
  int x[10] = {5,1,3,2,6,4,10,9,7,8};
  int length = sizeof(x)/sizeof(x[0]);
  task2(x, length);

  //TASK4:
  int ii = 0;
  int length2 = sizeof(x)/sizeof(x[0]); 
  quickSort(x, 0, length2-1); 
  printf("\nYour array after quickSorting:\n"); 
  for (ii = 0; ii < length2; ii++)
    printf("%d ", x[ii]);
  
 return 0;
}
