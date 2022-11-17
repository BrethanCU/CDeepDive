all: thread_example fork_example shared_memory_example semaphore_example

thread_example: thread_example.c
	gcc -D_REENTRANT thread_example.c -o thread_example -lpthread

fork_example: fork_example.c
	gcc fork_example.c -o fork_example

shared_memory_example: shared_memory_example/*.c shared_memory_example/*.h
	$(MAKE) -C shared_memory_example

semaphore_example: semaphore_example/*.c semaphore_example/*.h
	$(MAKE) -C semaphore_example

clean:
	rm -f thread_example fork_example
	$(MAKE) clean -C shared_memory_example
	$(MAKE) clean -C semaphore_example

.PHONY: shared_memory_example semaphore_example
