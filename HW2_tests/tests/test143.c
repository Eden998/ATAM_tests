#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', 939091185916067093);
	printf("Test 143 output: %hi\n",res);
	assert(res == 0);
	return 0;
}