#include <stdio.h>
#include <pthread.h>

/*
Mutex is used to achieve mutual exclusion
conditinal var are for syncronising threads

*/

pthread_mutex_t lock;
pthread_cond_t cond;

int ready = 0;

void *wt(void *args)
{
    pthread_mutex_lock(&lock);
    
    while(ready == 0)
    {
        pthread_cond_wait(&cond,&lock);
    }
    
    printf("Now executed thread 1 \n");
    
    pthread_mutex_unlock(&lock);
    
    return NULL;
    
}

void *sig(void *args)
{
    
    pthread_mutex_lock(&lock);
    
    ready = 1;
    
    printf("Executing thread 2 first\n");
    
    pthread_cond_signal(&cond);
    
    pthread_mutex_unlock(&lock);
    
    return NULL;
}

int main()
{
    
    pthread_mutex_init(&lock,NULL);
    
    pthread_cond_init(&cond,NULL);
    
    pthread_t t1,t2;
    
    pthread_create(&t1, NULL, wt, NULL);
    pthread_create(&t2, NULL, sig, NULL);
    
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    
    pthread_mutex_destroy(&lock);
    
    return 0;
}