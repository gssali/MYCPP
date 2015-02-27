#include <semaphore.h>

sem_t User;
sem_t Record;

sem_init(&User,0,1);//0为不共享
sem_init(&Record,0,1);

sem_destroy(&User);
sem_destroy(&Record);

sem_wait(&User);
sem_post(&Record);
