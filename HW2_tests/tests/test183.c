#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -832436541087098913);
	printf("Test 183 output: %hi\n",res);
	assert(res == 7);
	return 0;
}