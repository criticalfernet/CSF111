#include <stdio.h>

int main() {

  int marks[5] = {50, 60, 70, 80, 90};
  int *p1 = marks;

  printf("%d\n", *(p1 + 0)); //same as marks[0]
  printf("%d\n", *(p1 + 1)); //same as marks[1]
  printf("%d\n", *(p1 + 2)); //same as marks[2]
  printf("%d\n", *(p1 + 3)); //same as marks[3]
  printf("%d\n", *(p1 + 4)); //same as marks[4]
  printf("Hello World!\n");


	printf("\n%d\n", 2[marks]); // marks[i] == i[marks]


  return 0;
}
