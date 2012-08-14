#include <sys/time.h>
#include <sys/resource.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <signal.h>

#include <errno.h>

int main()
{
	
	for(int i = 0; i < 1024*1024*15; i++) {
		double * p = (double *)malloc(1024*sizeof(char));
		if(p == NULL) {
			printf("failed\n");	
			return 0;
		}
	}
	
	//usleep(30000000);
	return 0;
}
	
