#include <stdio.h>

void rotate_clockwise(char array[], int len_of_array, int position) {

  while (position <= 0) {
    position += len_of_array;
  }

  position = position % len_of_array;

  char store[len_of_array];

  for (int i = 0; i < len_of_array; i++) {
    store[(i + position) % len_of_array] = array[i];
  }

  for (int i = 0; i < len_of_array; i++) {
    printf("%c ", store[i]);
  }
  printf("\n");
}

int main() {

  int len_of_array, position;
  printf("Enter the length of the character array: ");
  scanf(" %d", &len_of_array);
  char array[len_of_array];
  printf("Enter the elements of the array separated by space: ");
  for (int i = 0; i < len_of_array; i++) {
    scanf(" %c", &array[i]);
  }
  printf("Enter the position: ");
  scanf(" %d", &position);
  rotate_clockwise(array, len_of_array, position);
  return 0;
}
