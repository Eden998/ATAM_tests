#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 2);
	printf("Test 237 output: %hi\n",res);
	assert(res == 424);
	return 0;
}