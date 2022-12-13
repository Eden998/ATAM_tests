#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', -531023849991155983);
	printf("Test 300 output: %hi\n",res);
	assert(res == 221);
	return 0;
}