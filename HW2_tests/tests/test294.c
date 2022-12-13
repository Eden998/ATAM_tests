#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', -884119679517607694);
	printf("Test 294 output: %hi\n",res);
	assert(res == 468);
	return 0;
}