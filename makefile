

CXXFLGS = -I ./inc
VPATH = ./src

obj = main.o
exec = swoosh-swoosh 

$(exec): $(obj)
	$(CXX) $(obj) -o $@

$(obj): %.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) $< -o $@

clean:
	rm -f $(obj) $(exec)
