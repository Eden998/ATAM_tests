#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', 75);
	printf("Test 264 output: %hi\n",res);
	assert(res == 30);
	return 0;
}