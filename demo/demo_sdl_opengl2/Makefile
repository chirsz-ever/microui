#CC = g++

MICROUI_DICT = ../../src

EXE = demo_sdl_opengl2
SOURCES = main.c
SOURCES += ../renderer.c
SOURCES += $(MICROUI_DICT)/microui.c
OBJS = $(addsuffix .o, $(basename $(notdir $(SOURCES))))

CFLAGS = -I$(MICROUI_DICT) -I..
CFLAGS += -O3 -g -Wall -pedantic -std=c11
CFLAGS += `sdl2-config --cflags`
LIBS = -lGL -lm `sdl2-config --libs`

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

%.o:../%.c
	$(CC) $(CFLAGS) -c -o $@ $<

%.o:$(MICROUI_DICT)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(EXE)
	@echo Finish to build '"$^"'

$(EXE): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

microui.o main.o renderer.o: $(MICROUI_DICT)/microui.h
main.o renderer.o: ../renderer.h
renderer.o: ../atlas.inl

clean:
	rm -f $(EXE) $(OBJS)