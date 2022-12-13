#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 82);
	printf("Test 271 output: %hi\n",res);
	assert(res == 70);
	return 0;
}