all:
	gcc src/main.c src/worker.c -o bin/main -lm

clean:
	rm -f bin/main obj/*.o
