// Initialize mutex
int pthread_mutex_init(pthread_mutex_t *mutex, const
pthread_mutexattr_t *mutexattr);

// Lock resource
int pthread_mutex_lock(pthread_mutex_t *mutex);

// Free resource
int pthread_mutex_unlock(pthread_mutex_t *mutex);

// Delete mutex
int pthread_mutex_destroy(pthread_mutex_t *mutex);

