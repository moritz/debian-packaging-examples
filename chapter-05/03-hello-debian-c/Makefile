build: hello

hello: hello.c
	gcc -o hello hello.c

install:
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	install hello $(DESTDIR)$(PREFIX)/bin/

