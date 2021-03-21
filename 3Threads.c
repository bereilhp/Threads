#include <stddef.h>
#include <pthread.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdlib.h>

//Compile gcc 3Threads -o 3Threads -lpthread 

void * process(void * args){

	for(int i = 0; i<3; i++){
	
		printf("%s", (char *)args);
		fflush(stdout);
		

		}

		
	pthread_exit(0);
		
	}
	
int main(){
	
		pthread_t th_a, th_b, th_c;		
	
	pthread_create 
		(&th_a, NULL, process, "A");	
	pthread_create
		(&th_b, NULL, process, "B");
	pthread_create
		(&th_c, NULL, process, "C");
		
	sleep(1);
		
}
