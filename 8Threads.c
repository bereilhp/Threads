#include <stddef.h>
#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdlib.h>

//Compile gcc 8Threads -o 8Threads -lpthread 

void * process(void * args){

	printf("%s", (char *)args);
	fflush(stdout);
	pthread_exit(0);
	}
	
int main(){
	
	pthread_t th_a, th_b, th_c, th_d, th_e, th_f, th_g, th_h;		
	
	pthread_create 
		(&th_a, NULL, process, " THREAD A\n");	
	pthread_create
		(&th_b, NULL, process, " THREAD B \n");
	pthread_create 
		(&th_c, NULL, process, " THREAD C \n");	
	pthread_create
		(&th_d, NULL, process, " THREAD D \n");
	pthread_create 
		(&th_e, NULL, process, " THREAD E \n");	
	pthread_create
		(&th_f, NULL, process, " THREAD F \n");
	pthread_create 
		(&th_g, NULL, process, " THREAD G \n");	
	pthread_create
		(&th_h, NULL, process, " THREAD H \n");
	
	sleep(1);
	
	
}
