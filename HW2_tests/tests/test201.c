#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', 0);
	printf("Test 201 output: %hi\n",res);
	assert(res == 278);
	return 0;
}