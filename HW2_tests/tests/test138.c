#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', 452766995522109186);
	printf("Test 138 output: %hi\n",res);
	assert(res == 2);
	return 0;
}