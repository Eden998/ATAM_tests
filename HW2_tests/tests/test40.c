#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -39);
	printf("Test 40 output: %hi\n",res);
	assert(res == 7);
	return 0;
}