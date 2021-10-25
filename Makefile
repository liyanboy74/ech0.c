default:
	gcc ech0.c -o ech0

install:
	sudo cp ech0 /usr/local/bin

clean:
	rm ech0