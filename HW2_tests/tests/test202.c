#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', -62);
	printf("Test 202 output: %hi\n",res);
	assert(res == 309);
	return 0;
}