THRIFT_DIR = /usr/local/include/thrift
LIB_DIR = /usr/local/lib

GEN_SRC = gen-cpp/SimonSays.cpp gen-cpp/simonsays_types.cpp gen-cpp/simonsays_constants.cpp

simonsays: simonsays.cpp
	g++ -o simonsays -I${THRIFT_DIR} -Igen-cpp -L${LIB_DIR} -lthrift simonsays.cpp ${GEN_SRC}
clean:
	$(RM) -r simonsays

