#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', 570591447248961678);
	printf("Test 257 output: %hi\n",res);
	assert(res == 25);
	return 0;
}