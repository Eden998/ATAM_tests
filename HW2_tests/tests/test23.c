#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', 61);
	printf("Test 23 output: %hi\n",res);
	assert(res == 0);
	return 0;
}