#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', 534439734575365308);
	printf("Test 127 output: %hi\n",res);
	assert(res == 0);
	return 0;
}