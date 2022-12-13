#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', -81744826543880392);
	printf("Test 192 output: %hi\n",res);
	assert(res == 5);
	return 0;
}