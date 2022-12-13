#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 23);
	printf("Test 241 output: %hi\n",res);
	assert(res == 314);
	return 0;
}