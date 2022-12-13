#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 671395738224695370);
	printf("Test 110 output: %hi\n",res);
	assert(res == 5);
	return 0;
}