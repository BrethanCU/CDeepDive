# Welcome to the OS programming of the workshop!
In order to run these demos you need to have a Linux operating system!

## Compiling the demos
```
$ make
```

## Running the threading demo
```
$ ./thread_example
thread_function is running. Argument was 0
thread_function is running. Argument was 1
thread_function is running. Argument was 2
thread_function is running. Argument was 3
thread_function is running. Argument was 4
Bye from 1
thread_function is running. Argument was 5
Waiting for threads to finish...
Bye from 5
Picked up a thread
Bye from 0
Bye from 2
Bye from 3
Bye from 4
Picked up a thread
Picked up a thread
Picked up a thread
Picked up a thread
Picked up a thread
All done
```

## Running the fork demo
```
$ ./fork_example.
fork program starting
pid of the parent 2315
This is the parent
child process: the value returned by forks is 2315
Time it took to fork a child: 119 micro sec
This is the child
This is the parent
This is the child
This is the parent
This is the child
This is the parent
This is the parent
```

## Running the shared memory demo
Locate the shared memory directory using:
```
$ cd shared\_memory\_example
```

Then try the following:
```
$ ./shm1 &
[1] 2326
$ ./shm2
Memory attachedat 1BFAD000
Enter some text: hello
You wrote: hello
waiting for client...
Enter some text: this
You wrote: this
waiting for client...
Enter some text: is
You wrote: is
waiting for client...
waiting for client...
Enter some text: a
You wrote: a
waiting for client...
waiting for client...
Enter some text: test
You wrote: test
waiting for client...
Enter some text: end
You wrote: end
```
