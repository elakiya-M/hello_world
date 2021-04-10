all.exe: operation.c add.c sub.c mul.c div.c
	gcc operation.c add.c sub.c mul.c div.c -o all.exe