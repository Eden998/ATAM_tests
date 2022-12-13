#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -98);
	printf("Test 47 output: %hi\n",res);
	assert(res == 7);
	return 0;
}