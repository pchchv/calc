calc: calc.o calculator.o scientific.o
	g++ -o calc calc.o calculator.o scientific.o

calc.o: calc.cpp calculator.hpp scientific.hpp
	g++ -c calc.cpp

calculator.o: calculator.cpp calculator.hpp
	g++ -c calculator.cpp

scientific.o: scientific.cpp scientific.hpp
	g++ -c scientific.cpp