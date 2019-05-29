CXXFLAGS += --std=c++17
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
default: SoccerCart

all: SoccerCart

debug: CXXFLAGS += -g
debug: default

SoccerCart: ball.o shinpad.o product.o *.h
	${CXX} ${CXXFLAGS} -o ball.o shinpad.o product.o $(GTKFLAGS)
# SoccerCart.o: SoccerCart.cpp *.h
# 	${CXX} ${CXXFLAGS} -c SoccerCart.cpp $(GTKFLAGS)
shinpad.o: shinpad.cpp *.h
	${CXX} ${CXXFLAGS} -c shinpad.cpp $(GTKFLAGS)
product.o: product.cpp *.h
	${CXX} ${CXXFLAGS} -c product.cpp $(GTKFLAGS)
ball.o: ball.cpp *.h
	${CXX} ${CXXFLAGS} -c ball.cpp $(GTKFLAGS)
clean:
	rm -f *.gch *.o SoccerCart
