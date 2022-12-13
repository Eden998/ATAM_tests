#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -873478081193633473);
	printf("Test 144 output: %hi\n",res);
	assert(res == 16);
	return 0;
}