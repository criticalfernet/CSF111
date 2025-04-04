#include <stdio.h>
#include <stdlib.h>

int *get_number() {
  int value = 37;
  return &value; // Dangling pointers
}

int *get_number_d() {
	int *value = (int *) malloc(sizeof(int)); //Heap allocation.
	*value = 37;
	return value;
}

int *get_number_dc() {
	int *value = (int *) calloc(37, sizeof(int)); //same as line 10 & 11.
	return value;
}

int main() {

  int auth = 0;
  int nums[5];

  nums[7] = 1; // Issue with static memory allotment and out of bound error.

  printf("%p \n", &auth);
  printf("%p \n", &nums[0]);
  printf("%d \n", auth);

  //------------------------------------------------------------------------

  int *special = get_number(); //Garbage Value.
  int *special_d = get_number_d();
	printf("%d \n",*special_d);
	free(special_d); // Freed the memory.
	printf("%d \n",*special_d); //Garbage Value now.

  return 0;
}
