#include <stdio.h>
struct candidate{
	char name[80];
	int votes;
};

int main()
{
	struct candidate clinton = { .name = "Hilary Clinton", .votes = 0 };
	struct candidate trump = { .name = "Donald Trump", .votes = 0 };
	int i = 0;
	int vote = 0;
	for(i=0; i<9;){
		printf("Candidates:\n1. %s\n2. %s\nVote: ", clinton.name, trump.name);
		scanf("%d", &vote);
		switch(vote){
			case 1:
				clinton.votes++;
				i++;
				break;
			case 2:
				trump.votes++;
				i++;
				break;
			default:
				break;
		}
	}
	if(clinton.votes>trump.votes){
		printf("The winner is %s\n",clinton.name);
	}else {
		printf("The winner is %s\n",trump.name);
	}
	return 0;
}
