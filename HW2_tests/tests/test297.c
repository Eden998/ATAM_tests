#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('~', -205790479518330534);
	printf("Test 297 output: %hi\n",res);
	assert(res == 167);
	return 0;
}