#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', -51);
	printf("Test 245 output: %hi\n",res);
	assert(res == 546);
	return 0;
}