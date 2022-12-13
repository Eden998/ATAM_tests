#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 14);
	printf("Test 81 output: %hi\n",res);
	assert(res == 4);
	return 0;
}