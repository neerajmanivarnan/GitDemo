In this implementation, we have three semaphores:

mutex: a binary semaphore that protects the critical section of the code where the buffer is accessed
empty: a counting semaphore that keeps track of the number of empty slots in the buffer
full: a counting semaphore that keeps track of the number of full slots in the buffer
The producer thread generates a random item to add to the buffer, waits for an empty slot in the buffer, enters the critical section, adds the item to the buffer, and signals that the buffer is no longer empty. The consumer thread waits for a full slot in the buffer, enters the critical section, removes an item from the buffer, and signals that the buffer is no longer full. Both threads run in an infinite loop, and the program ends when the threads are joined.
