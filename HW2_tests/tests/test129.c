#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('~', 690328199632193666);
	printf("Test 129 output: %hi\n",res);
	assert(res == 3);
	return 0;
}