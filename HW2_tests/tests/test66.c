#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', 73);
	printf("Test 66 output: %hi\n",res);
	assert(res == 0);
	return 0;
}