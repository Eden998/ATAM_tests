#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 53);
	printf("Test 233 output: %hi\n",res);
	assert(res == 231);
	return 0;
}