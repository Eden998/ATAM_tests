#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', -96);
	printf("Test 39 output: %hi\n",res);
	assert(res == 18);
	return 0;
}