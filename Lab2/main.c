#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>


void task1() {
  int int_ = INT_MAX;
  float float_ = FLT_MAX;
  double double_ = DBL_MAX;

  printf("%d",int_);
  printf("\n");
  printf("%f",float_);
  printf("\n");
  printf("%f",double_);
  printf("\n");

  printf("%d", sizeof(int_));
  printf("\n");
  printf("%d", sizeof(float_));
  printf("\n");
  printf("%d", sizeof(double_));
}

void task2() {
  char str[20];
  char invert_str[20];

  printf("Write Your row to invert\n");
  scanf( "%s" , str);
  // fgets(str,20, stdin);
  //puts(str);
  printf("Your row\n");
  printf(str);

  int i = 0;
  int j = 0;
  for (i = strlen(str)-1, j = 0; i >= 0; i --, j++) {
    invert_str[j] = str[i];
  }
  printf("A new row\n");
  printf(invert_str);
}

void task3() {
  printf("Choose option");
  printf("\n0, 1, 2 or 3\n");
  int option;
  scanf("%d",&option);
  printf("\nNow write n");
  int n;
  scanf("%d",&n);

  int i = 0;
  int j = 0;
  switch(option) {
    case 0:
      for (i = 0; i < n; i++) {
        for (j = 0; j < n-i-1; j++) {
          printf(" ");
        }
        for (j = 0; j < 2*i+1; j++){
          printf("*");
        }
        for (j = 0; j < n-i-1; j++) {
          printf(" ");
        }
        printf("\n");
      }
      break;
    case 1:
      for (i = 0; i < n; i++) {
        for (j = 0; j < i+1; j++){
          printf("*");
        }
        printf("\n");
      }
      break;
    case 2:
      for (i = 0; i < n/2; i++) {
        for (j = 0; j < i+1; j++){
          printf("*");
        }
        printf("\n");
      }
      for (i = n/2-1; i > 0; i--) {
        for (j = i; j > 0; j--){
          printf("*");
        }
        printf("\n");
      }
      break;
    case 3:
      for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
          printf("*");
        }
        printf("\n");
      }
      break;
  }
}

void swap(int* aa, int* bb) {
  int temp = *aa;
  *aa = *bb;
  *bb = temp;
}

void task4() {
  printf("Write two numbers to swap\n");
  int a,b;
  scanf("%d", &a);
  scanf("%d",&b);
  printf("Before swaping: ");
  printf("%d", a);
  printf(" ");
  printf("%d", b);

  swap(&a, &b);
  printf("\nAfter swaping: ");
  printf("%d", a);
  printf(" ");
  printf("%d", b);
}

int main(void) {
  printf("Nice to meet You! Which task are you going to check? (1,2,3 or 4)\n");
  int task;
  scanf("%d", &task);
  switch(task) {
  case 1: task1();
  break;
  case 2: task2();
  break;
  case 3: task3();
  break;
  case 4: task4();
  break;
  }
  return 0;
}