#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 590325800814225367);
	printf("Test 284 output: %hi\n",res);
	assert(res == 128);
	return 0;
}