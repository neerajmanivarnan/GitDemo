#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int in = 0, out = 0;

sem_t mutex, empty, full;

void *producer(void *arg) {
    int item;
    while (1) {
        item = rand() % 100; // Generate a random item to add to the buffer
        sem_wait(&empty); // Wait for an empty slot in the buffer
        sem_wait(&mutex); // Enter critical section
        buffer[in] = item;
        in = (in + 1) % BUFFER_SIZE;
        printf("Produced item: %d\n", item);
        sem_post(&mutex); // Exit critical section
        sem_post(&full); // Signal that the buffer is no longer empty
    }
}

void *consumer(void *arg) {
    int item;
    while (1) {
        sem_wait(&full); // Wait for a full slot in the buffer
        sem_wait(&mutex); // Enter critical section
        item = buffer[out];
        out = (out + 1) % BUFFER_SIZE;
        printf("Consumed item: %d\n", item);
        sem_post(&mutex); // Exit critical section
        sem_post(&empty); // Signal that the buffer is no longer full
    }
}

int main() {
    pthread_t producer_thread, consumer_thread;
    sem_init(&mutex, 0, 1); // Initialize mutex to 1
    sem_init(&empty, 0, BUFFER_SIZE); // Initialize empty slots to BUFFER_SIZE
    sem_init(&full, 0, 0); // Initialize full slots to 0
    pthread_create(&producer_thread, NULL, producer, NULL); // Start producer thread
    pthread_create(&consumer_thread, NULL, consumer, NULL); // Start consumer thread
    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);
    return 0;
}

