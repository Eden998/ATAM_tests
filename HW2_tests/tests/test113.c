#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', 144818036581947447);
	printf("Test 113 output: %hi\n",res);
	assert(res == 3);
	return 0;
}