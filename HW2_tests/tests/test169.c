#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 965854861447888969);
	printf("Test 169 output: %hi\n",res);
	assert(res == 0);
	return 0;
}