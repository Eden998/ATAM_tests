#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', 932719974973392410);
	printf("Test 179 output: %hi\n",res);
	assert(res == 0);
	return 0;
}