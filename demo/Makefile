#CC = g++

EXE = demo
SOURCES = main.c
SOURCES += renderer.c
SOURCES += ../src/microui.c
OBJS = $(addsuffix .o, $(basename $(notdir $(SOURCES))))

CFLAGS = -I../src/
CFLAGS += -O3 -g -Wall -pedantic -std=c11
CFLAGS += `sdl2-config --cflags`
LIBS = -lGL -lm `sdl2-config --libs`

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

%.o:../src/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(EXE)
	@echo Finish to build '"$^"'

$(EXE): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

microui.o main.o renderer.o:../src/microui.h
main.o renderer.o:renderer.h
renderer.o:atlas.inl

clean:
	rm -f $(EXE) $(OBJS)