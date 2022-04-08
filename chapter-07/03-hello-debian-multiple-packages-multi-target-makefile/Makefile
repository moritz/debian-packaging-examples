PREFIX=/usr
INSTALL_TO=$(DESTDIR)$(PREFIX)

build: hello

hello: hello.c
	gcc -std=c99 -o hello hello.c

install: install_binary install_data

install_binary:
	mkdir -p $(INSTALL_TO)/bin
	install hello $(DESTDIR)$(PREFIX)/bin/

install_data:
	mkdir -p $(INSTALL_TO)/share/hello-debian/
	install hello-debian-greeting $(INSTALL_TO)/share/hello-debian/
