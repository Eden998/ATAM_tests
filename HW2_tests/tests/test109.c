#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', -323199705961001657);
	printf("Test 109 output: %hi\n",res);
	assert(res == 17);
	return 0;
}