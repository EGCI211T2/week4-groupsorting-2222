DEPS= sort
compile: main.cpp 
	 clear
	 g++ main.cpp -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS) $(var)

clean:
	 rm $(DEPS)