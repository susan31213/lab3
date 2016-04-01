all: a.cpp Clock.o b.o
	g++ a.cpp
	g++ -o b Clock.o b.o

b.o: Clock.h b.cpp
	g++ -c b.cpp

Clock.o: Clock.h Clock.cpp
	g++ -c Clock.cpp

clean:
	rm b a.out *.o
