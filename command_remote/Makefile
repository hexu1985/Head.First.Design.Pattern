
RM = rm -f
CXX = g++
CXXFLAGS = -Wall -g -DNDEBUG -std=c++14
INCLUDES = 
LDFLAGS = 
LDPATH =
VPATH = 

HEADERS =  $(shell ls *.h)
SOURCES = $(shell ls *.cpp)
PROGS = remote_loader

all: $(PROGS)
	@echo "PROGS = $(PROGS)" 

clean:
	$(RM) $(PROGS)

$(PROGS): $(SOURCES) $(HEADERS)
	$(CXX) -o $@ $(CXXFLAGS) $(INCLUDES) $(SOURCES) $(LDFLAGS) $(LDPATH)
