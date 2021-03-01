compile:
	g++ -std=c++20 Item.cpp -c
	g++ -std=c++20 Category.cpp -c
	g++ -std=c++20 Customer.cpp -c
	g++ -std=c++20 Order.cpp -c

all: compile
	g++ -std=c++20 main.cpp *.o && ./a.exe