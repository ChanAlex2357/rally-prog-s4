CC = g++
CFLAGS = -c -Wall -g
LFLAGS = -lpq
all : rally_app
rally_app : rally_app.o
	$(CC) rally_app.o $(LFLAGS) -o rally_app -std=c++11 
rally_app.o : rally_app.cpp
	$(CC) $(CFLAGS) rally_app.cpp -o rally_app.o
clean:
	rm -f *.o rally_app