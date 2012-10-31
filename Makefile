all: client server

hw.h: hw.x
	rpcgen hw.x

hw_svc.c hw_clnt.c main.c: hw.h

client: main.o hw_clnt.o
	cc -o client main.o hw_clnt.o  -lnsl

server: hw_server.o hw_svc.o
	cc -o server hw_server.o hw_svc.o -lnsl

.PHONY: clean

clean:
	-rm *.o
	-rm client
	-rm server
	-rm hw.h
	-rm hw_clnt.c
	-rm hw_svc.c
