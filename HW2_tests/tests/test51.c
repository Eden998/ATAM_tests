#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 72);
	printf("Test 51 output: %hi\n",res);
	assert(res == 1);
	return 0;
}