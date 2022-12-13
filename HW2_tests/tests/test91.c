#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', 94);
	printf("Test 91 output: %hi\n",res);
	assert(res == 0);
	return 0;
}