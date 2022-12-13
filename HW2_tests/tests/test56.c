#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', 50);
	printf("Test 56 output: %hi\n",res);
	assert(res == 4);
	return 0;
}