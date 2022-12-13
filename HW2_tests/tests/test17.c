#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -4);
	printf("Test 17 output: %hi\n",res);
	assert(res == 3);
	return 0;
}