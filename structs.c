#include <stdio.h>

typedef long double number; //Typedef DataTypes.

/*

aggregation of non homogenous data.

*/

struct tweet {
  char author[20];
  char text[140];
  char timestamp[40];
  int num_rt;
  int num_likes;
  int num_quote;
};

typedef struct tweet tweet;
// Size of Struct = Sum of Size of Individual Fields.

tweet sample_text = {
    "John_Doe", "Hello World!", "Mar 11 02:20:08 2025", 0, 12, 0};

int main() {

  printf("@%s Tweeted '%s' at %s \n", sample_text.author, sample_text.text,
         sample_text.timestamp);
  return 0;
}
