#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', -790178913531187128);
	printf("Test 134 output: %hi\n",res);
	assert(res == 15);
	return 0;
}