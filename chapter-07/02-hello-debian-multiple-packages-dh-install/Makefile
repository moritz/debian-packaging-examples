PREFIX=/usr
INSTALL_TO=$(DESTDIR)$(PREFIX)

build: hello

hello: hello.c
	gcc -std=c99 -o hello hello.c

install:
	mkdir -p $(INSTALL_TO)/bin $(INSTALL_TO)/share/
	install hello $(DESTDIR)$(PREFIX)/bin/
	install hello-debian-greeting $(INSTALL_TO)/share/

# vim: noexpandtab
