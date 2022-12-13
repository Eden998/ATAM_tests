#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -53);
	printf("Test 230 output: %hi\n",res);
	assert(res == 676);
	return 0;
}