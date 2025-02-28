#include <stdio.h>
#include <math.h>


int findSum(int d1, int d2, int d3, int d4){
	return d1*(int)pow(2,0)+d2*(int)pow(2,1)+d3*(int)pow(2,2)+d4*(int)pow(2,3);
}

char parse(int d1, int d2, int d3, int d4) { 
	//return '0';
	int sum = findSum(d1,d2,d3,d4);
	if (sum<10) {
		return sum+48;
	} else {
		return sum+55;
	}
}

void print_array(char array[],int len){
	for(int k=len-1;k>=0;k--){
		printf("%c",array[k]);
	}
}

void binary_to_hex(int len_of_bin) {

  int len_array = len_of_bin;
  if (len_array % 4 != 0) {
    len_array += 4 - (len_array % 4);
  }
  int bit_array[len_array];
	for (int i=0; i<len_array;i++) {
		bit_array[i] = 0;	
	}
	printf("Enter The Bits: ");
	for (int i=len_of_bin-1; i>=0;i--) {
		scanf("%d", &bit_array[i]);	
	}

	int reduced = len_array/4;
	char hex_array[reduced];

	for(int j=0; j<=len_array-4;j+=4){
		char out = parse(bit_array[j],bit_array[j+1],bit_array[j+2],bit_array[j+3]);
		hex_array[j/4] = out;
	}

	print_array(hex_array,reduced);

  printf("\n");
}

int main() { 

	int len;
	printf("Enter the number: ");
	scanf("%d",&len);
	binary_to_hex(len);

	return 0; }
