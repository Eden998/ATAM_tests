#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', -352594802225313308);
	printf("Test 112 output: %hi\n",res);
	assert(res == 7);
	return 0;
}