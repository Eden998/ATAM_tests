#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', 5235252931946635115);
	if(res != 0)	{
		printf("Test 199 failed:\n");
		printf("	Test 199 output: %hi\n",res);
		printf("	Test 199 expected: 0\n");
	}
	else printf("Test 199 passed\n");
	return 0;
}