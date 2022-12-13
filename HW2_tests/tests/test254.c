#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', 317631203869261074);
	printf("Test 254 output: %hi\n",res);
	assert(res == 56);
	return 0;
}