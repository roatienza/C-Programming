#include <stdio.h>
#include <string.h>

int main()
{
	char html[128];
	char decoded_html[128];
	int tag = 0;
	int i = 0;
	int j = 0;
	fgets(html,sizeof(html),stdin);
	for(i=0; i<strlen(html); i++){
		if(html[i]=='<'){
			tag = 1;
		}else if(html[i]=='>'){
			tag = 0;
			continue;
		}
		if(!tag){
			decoded_html[j++] = html[i]; 
		}
	}
	decoded_html[j] = 0;
	puts(decoded_html);
	return 0;
}
