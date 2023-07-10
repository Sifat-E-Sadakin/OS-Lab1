#include<stdio.h>
#include<string.h>

int main(){


	char concat[270];
    
    char line[270];
	
    FILE * fp = fopen("file.txt","r"); 
	fgets(line,270,fp); 
	
	
	
	FILE * fp1 = fopen("modifiedFile.txt","w");
	
	char *t;
	t = strtok(line, " "); 
	while (t != NULL){
		strcat(concat,t);
		strcat(concat, " ");
		t = strtok(NULL," "); 
	}
	fprintf(fp1,concat);
	fclose(fp);
	
}
