#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', 200222474033836592);
	printf("Test 249 output: %hi\n",res);
	assert(res == 312);
	return 0;
}