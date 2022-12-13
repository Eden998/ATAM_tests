#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', -689560030455376181);
	printf("Test 214 output: %hi\n",res);
	assert(res == 812);
	return 0;
}