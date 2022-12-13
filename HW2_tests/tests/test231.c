#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', -8);
	printf("Test 231 output: %hi\n",res);
	assert(res == 102);
	return 0;
}