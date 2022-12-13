#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 88);
	printf("Test 37 output: %hi\n",res);
	assert(res == 0);
	return 0;
}