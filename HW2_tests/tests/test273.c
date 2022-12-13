#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', -2);
	printf("Test 273 output: %hi\n",res);
	assert(res == 256);
	return 0;
}