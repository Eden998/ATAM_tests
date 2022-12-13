#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', -97);
	printf("Test 243 output: %hi\n",res);
	assert(res == 890);
	return 0;
}