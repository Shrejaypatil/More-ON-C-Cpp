pthread_mutex_t lock;
int counter = 0;

void *func(void *args)
{
    int* id = (int*)args;
    
    pthread_mutex_lock(&lock);
    
    printf("Thread %d under execution \n",*id);
    
    counter++;
    
    printf("Thread %d execution complete \n",*id);
    
    pthread_mutex_unlock(&lock);
    
    return NULL;
}


int main()
{
    pthread_t threads[10];
    
    pthread_mutex_init(&lock,NULL);
    
    for(int i =0 ;i < 10; i++)
    {
        pthread_create(&threads[i], NULL, func, &i);
    }
    
    for(int i =0 ;i < 10; i++)
    {
        pthread_join(threads[i], NULL);
    }
    
    printf("The final value of counter is %d", counter);
    
    pthread_mutex_destroy(&lock);
    
    return 0;
}