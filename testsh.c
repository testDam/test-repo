#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>

#define MAX_PATH	100
#define LF			10
#define BUF_SIZE	100

int print_prompt()
{
		char *buffer = (char *)malloc(MAX_PATH); 
			char *value = (char *)getcwd (buffer, MAX_PATH); 

				if (value != 0)	fprintf(stdout,"jsh:%s > ",buffer);
					free (buffer); 
						
						return 0;
}

int main()
{
		char str[BUF_SIZE]={'\0'};

		while(1){
			print_prompt();
			fgets(str, BUF_SIZE, stdin);
			if(!strcmp(str, "exit\n")) exit(0);
			if(!strcmp(str, "ls\n")){
				ls_dir();
				printf("\n");
			}
			
		}

		return 0;
}
