#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', -79);
	if(res != 890)	{
		printf("Test 204 failed:\n");
		printf("	Test 204 output: %hi\n",res);
		printf("	Test 204 expected: 890\n");
	}
	else printf("Test 204 passed\n");
	return 0;
}