#include <stdio.h>
struct candidate{
	char name[80];
	int votes;
};

int main()
{
	struct candidate candidates[] = {
	    { .name = "Hilary Clinton", .votes = 0 },
        { .name = "Donald Trump", .votes = 0 }
    };
    unsigned long len = sizeof(candidates)/sizeof(candidates[0]);
    printf("len of candidates[] = %lu\n", len);

	return 0;
}
