CPP_OBJS = \
	gtest_main.o \
	Location.o

CPP_SOURCES = \
	gtest_main.cpp \
	classes/Location.cpp

CPP_FLAGS = \
	-g \
	-Wall \
	-Wextra \
	-lgtest \
	-lgtest_main \
	-pthread \
	-I/classes

CPP_LDFLAGS = \
	-lgtest \
	-lgtest_main \
	-lpthread


all: $(CPP_OBJS)
	g++ $(CPP_OBJS) -o test $(CPP_LDFLAGS)

$(CPP_OBJS): $(CPP_SOURCES)
	g++ -c $(CPP_SOURCES) $(CPP_FLAGS)

clean:
	rm -rf test $(CPP_OBJS)

