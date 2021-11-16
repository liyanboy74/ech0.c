default:compile

compile:ech0.c
	gcc ech0.c -o ech0

install:compile
	sudo cp ech0 /usr/local/bin

clean:
	rm ech0