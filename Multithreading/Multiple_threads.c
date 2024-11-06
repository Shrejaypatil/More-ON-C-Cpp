#include <stdio.h>
#include <pthread.h>


void *func(void *args)
{
    int* id = (int*)args;
    
    printf("Thread %d under execution \n",*id);
    
    return NULL;
}


int main()
{
    pthread_t threads[10];
    
    for(int i =0 ;i < 10; i++)
    {
        pthread_create(&threads[i], NULL, func, &i);
    }
    
    for(int i =0 ;i < 10; i++)
    {
        pthread_join(threads[i], NULL);
    }
    
    return 0;
}