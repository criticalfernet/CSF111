#include <stdio.h>

void update_rank(int rank) { rank -= 1; }
void update_rank_ptr(int *rank) {
  *rank -= 1; // Practical Use of Pointers.
  // To change value of variable outside the scope.
}

void return_notes(int amount, int *c100, int *c200, int *c500) {
  // We can chnage value of variables which are out of scope of the function.
  *c500 = amount / 500;
  amount = amount % 500;

  *c200 = amount / 200;
  amount = amount % 200;

  *c100 = amount / 100;
  amount = amount % 100;
}

int main() {

  int marks = 76;
  printf("%d ", marks);
  printf("%p \n", &marks); // Prints Memory address of the variable marks.

  char ans = 'A';
  printf("%c ", ans);
  printf("%p \n", &ans); // Prints Memory address of the variable ans.

  double area = 31.4;
  printf("%lf ", area);
  printf("%p \n", &area); // Prints Memory address of the variable area.

  //----------------------------------------------------------------------------

  int *pointer = &marks; // Stores the address of Marks into a variable pointer.
  printf("%d ", *pointer);
  printf("%p\n", pointer);

  //----------------------------------------------------------------------------

  int rank = 8;
  update_rank(rank); // Doesn't change the value of rank.
  printf("Rank: %d\n", rank);
  update_rank_ptr(&rank); // Does change the value of rank.
  printf("Rank: %d\n", rank);

  //----------------------------------------------------------------------------

  // Practice Problem: Input is an integer multiple of 100, outputs the no. of
  // 500, 200 & 100 notes to dispense.(maximize higher denomination)

  int amount;
  scanf("%d", &amount);
  int count_500;
  int count_100;
  int count_200;

  return_notes(amount, &count_100, &count_200, &count_500);

  printf("500: %d, 200: %d, 100: %d \n", count_500, count_200, count_100);

  return 0;
}
