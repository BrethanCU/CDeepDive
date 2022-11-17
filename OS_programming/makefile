all: thread_example fork_example

thread_example:
	cc	-D_REENTRANT thread_example.c -o thread_example -lpthread
fork_example:
	cc	-D_REENTRANT fork_example.c -o fork_example -lpthread
clean:
	rm	-f thread_example fork_example
