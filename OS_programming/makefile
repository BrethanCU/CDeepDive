all: thread_example fork_example shared_memory_example

thread_example: thread_example.c
	cc -D_REENTRANT thread_example.c -o thread_example -lpthread

fork_example: fork_example.c
	cc -D_REENTRANT fork_example.c -o fork_example -lpthread

shared_memory_example: shared_memory_example/*.c shared_memory_example/*.h
	$(MAKE) -C shared_memory_example

clean:
	rm -f thread_example fork_example
	$(MAKE) clean -C shared_memory_example

.PHONY: shared_memory_example
