#include <stdio.h>

void print_cum(int *arr, int length) {
  for (int i = 1; i < length; i++) {
    *(arr + i) += *(arr + i - 1);
  }

  for (int i = 0; i < length; i++) {
    printf("%d ", *(arr + i));
  }
	printf("\n");
}

int main() {

  int marks[5] = {50, 60, 70, 80, 90};
  int *p1 = marks; // p1 is pointer to first element of array.

  printf("%d\n", *(p1 + 0)); // same as marks[0]
  printf("%d\n", *(p1 + 1)); // same as marks[1]
  printf("%d\n", *(p1 + 2)); // same as marks[2]
  printf("%d\n", *(p1 + 3)); // same as marks[3]
  printf("%d\n", *(p1 + 4)); // same as marks[4]
  printf("Hello World!\n");

  printf("\n%d\n", 2 [marks]); // marks[i] == i[marks]
	
	print_cum(marks, 5);

  return 0;
}
