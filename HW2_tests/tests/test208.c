#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', -462932240165659043);
	printf("Test 208 output: %hi\n",res);
	assert(res == 513);
	return 0;
}