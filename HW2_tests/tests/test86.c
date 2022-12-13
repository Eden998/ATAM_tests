#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', -42);
	printf("Test 86 output: %hi\n",res);
	assert(res == 10);
	return 0;
}