SOURCES = controller/* neuralnetwork/* view/*

.PHONY: all dist clean install uninstall dvi build

build:
	cmake -S . -B ./../build
	cmake --build ./../build

rebuild: uninstall build install

install: build
	cp -rf ./../build/MLP.app $(HOME)/Applications/

uninstall:
	rm -rf $(HOME)/Applications/MLP.app

clean:
	rm -rf ./../build

style:
	clang-format -n -verbose -style=Google $(SOURCES)

dist: clean
	tar -czf MLP.tgz ./*

dvi:
	open readme.pdf

tests: clean
	g++ -std=c++17 neuralnetwork/*.cpp  test/testing.cpp  -o test.out -lgtest
	./test.out
