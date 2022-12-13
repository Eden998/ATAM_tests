#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', -16);
	printf("Test 87 output: %hi\n",res);
	assert(res == 11);
	return 0;
}