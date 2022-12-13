#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('/', -181677651648472643);
	printf("Test 212 output: %hi\n",res);
	assert(res == 477);
	return 0;
}