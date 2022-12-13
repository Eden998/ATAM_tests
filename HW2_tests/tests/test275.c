#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', -254594268140960653);
	printf("Test 275 output: %hi\n",res);
	assert(res == 335);
	return 0;
}