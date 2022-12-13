#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 45);
	printf("Test 268 output: %hi\n",res);
	assert(res == 262);
	return 0;
}