#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', 34);
	printf("Test 78 output: %hi\n",res);
	assert(res == 9);
	return 0;
}