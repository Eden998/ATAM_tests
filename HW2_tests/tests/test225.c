#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', 522154640242717668);
	printf("Test 225 output: %hi\n",res);
	assert(res == 174);
	return 0;
}