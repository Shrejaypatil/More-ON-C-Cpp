#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

/*
semaphores are used for locking but may allow more than one thread to execute the 
critical section unlike mutex

*/

sem_t s;


void* func(void *args)
{
    sem_wait(&s);
    
    int *id = (int*)args;
    
    printf("Thread %d executing \n",*id);
    
    sleep(1);
    
    printf("Thread %d executed \n",*id);
    
    printf("\n\n\n");
    
    sem_post(&s);
    

    return NULL;
}



int main()
{
    sem_init(&s, 0 , 3);
    
    pthread_t threads[10];
    
    
    for(int i=0;i<10;i++)
    {
        pthread_create(&threads[i], NULL, func, &i);
    }
    
    for(int i=0; i< 10; i++)
    {
        pthread_join(threads[i], NULL);
    }
    
    sem_destroy(&s);

    
    return 0;
}