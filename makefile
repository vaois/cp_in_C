copy:copy_system.o
	gcc -o copy copy_system.o
copy_syetem.o:copy_system.c
	gcc -c copy_system.c
clean:
	rm copy_system.o copy
