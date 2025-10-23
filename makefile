DEPS= sort
compile: main.cpp sorting.h
	 clear
	 g++ main.cpp -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS) $(var)

clean:
	 rm $(DEPS)