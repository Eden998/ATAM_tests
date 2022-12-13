#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', 33);
	printf("Test 278 output: %hi\n",res);
	assert(res == 241);
	return 0;
}