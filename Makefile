all: out

out: main.o Conta.o Titular.o Cpf.o
	@echo "Linking and producing the final application"
	g++ main.o Conta.o Titular.o Cpf.o -o out
	@chmod +x out

main.o: main.cpp
	@echo "Compiling the main file"
	g++ -c main.cpp

Conta.o: Conta.cpp Conta.hpp
	@echo "Compiling Conta.o"
	g++ -c Conta.cpp Conta.hpp

Titular.o: Titular.cpp Titular.hpp
	@echo "Compiling Titular.o"
	g++ -c Titular.cpp Titular.hpp

Cpf.o: Cpf.cpp Cpf.hpp
	@echo "Compiling Cpf.o"
	g++ -c Cpf.cpp Cpf.hpp

clean:
	@echo "Removing everything but the source files"
	rm main.o Conta.o Titular.o Cpf.o out

