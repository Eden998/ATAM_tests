#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', 388545600679144388);
	printf("Test 270 output: %hi\n",res);
	assert(res == 70);
	return 0;
}