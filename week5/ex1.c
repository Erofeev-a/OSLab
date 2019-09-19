#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "pthread.h"

void *thread_funct(void *var)
{
	int *id = (int*) var;
	printf("ID:%d\n",*id );
	printf("Text.\n");
	return NULL;
}
	
int main(int argc, char const *argv[])
{
	int n;
	printf("Input n:\n");
	scanf("%d/n",&n);
	pthread_t thread;
	for (int i = 0; i < n; ++i)
	{
		pthread_create(&thread, NULL, thread_funct, (void*)&thread);
		pthread_join(thread,NULL);
	}
	pthread_exit(NULL);
	return 0;
}