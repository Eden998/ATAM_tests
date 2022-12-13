#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', -628650793352678608);
	printf("Test 136 output: %hi\n",res);
	assert(res == 10);
	return 0;
}