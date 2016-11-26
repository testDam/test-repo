#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#define BUF_SIZE	100

int ls_dir(){
	DIR *dp;
	struct dirent *dent;
	struct stat sbuf;
	char dirname[BUF_SIZE] = {'\0'};
	char path[BUF_SIZE];

	if((dp = opendir("./")) == NULL){
		perror("opendir error");
		exit(1);
	}
	while ((dent = readdir(dp))){
		strcpy(dirname, dent->d_name);
		printf("%s	", dirname);
	}
	closedir(dp);

	return 0;
}
