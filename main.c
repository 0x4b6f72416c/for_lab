#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

//  pc& wifi.exe 3 file_name 
int main(int argc,char *argv[])
{
	FILE  *fb;
	char *line = NULL;
	size_t   len = 0;
	ssize_t read= 0;	
	int  rez = atoi(argv[1]);
	
	char *secret_line[] ={"","","","647\n","7478\n","","","","43287545\n"};
	if(argc>1){
		fb = fopen(argv[2], "r");
		while((read =  getline(&line,&len,fb))!=-1){
			printf("checking password: %s\n",line);
			if(strcmp(line,secret_line[rez])==0){

				printf(" Damn  boy  u found it \n");
				break;
			}
			printf("Nothing was  founded\n");


		}
	}
	else {
		printf("Professsional  ZABIL ARGOOMENTS Lmao\n");
	}

	return  0;
}
