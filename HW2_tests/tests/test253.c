#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -290435072319916805);
	printf("Test 253 output: %hi\n",res);
	assert(res == 550);
	return 0;
}