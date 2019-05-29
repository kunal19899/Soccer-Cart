CXXFLAGS += --std=c++17
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
default: SoccerCart

all: SoccerCart

debug: CXXFLAGS += -g
debug: default

SoccerCart: main.o mainwin.o store.o jersey.o cleat.o ball.o shinpad.o product.o *.h
	${CXX} ${CXXFLAGS} -o SoccerCart main.o mainwin.o store.o jersey.o cleat.o ball.o shinpad.o product.o $(GTKFLAGS)
main.o: main.cpp *.h
	${CXX} ${CXXFLAGS} -c main.cpp $(GTKFLAGS)
mainwin.o: mainwin.cpp *.h
	${CXX} ${CXXFLAGS} -c mainwin.cpp $(GTKFLAGS)
store.o: store.cpp *.h
	${CXX} ${CXXFLAGS} -c store.cpp $(GTKFLAGS)
jersey.o: jersey.cpp *.h
	${CXX} ${CXXFLAGS} -c jersey.cpp $(GTKFLAGS)
cleat.o: cleat.cpp *.h
	${CXX} ${CXXFLAGS} -c cleat.cpp $(GTKFLAGS)
ball.o: ball.cpp *.h
	${CXX} ${CXXFLAGS} -c ball.cpp $(GTKFLAGS)
product.o: product.cpp *.h
	${CXX} ${CXXFLAGS} -c product.cpp $(GTKFLAGS)
shinpad.o: shinpad.cpp *.h
	${CXX} ${CXXFLAGS} -c shinpad.cpp $(GTKFLAGS)
clean:
	rm -f *.gch *.o main