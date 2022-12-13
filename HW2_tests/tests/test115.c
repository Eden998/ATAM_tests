#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', -437472466003070485);
	printf("Test 115 output: %hi\n",res);
	assert(res == 7);
	return 0;
}