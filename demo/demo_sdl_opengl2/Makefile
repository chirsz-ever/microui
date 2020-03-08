#CC = gcc

MICROUI_DICT = ../../src

EXE = demo_sdl_opengl2
SOURCES = main.c ../microui_demo.c
SOURCES += ../renderer.c
SOURCES += $(MICROUI_DICT)/microui.c
OBJS = $(addsuffix .o, $(basename $(notdir $(SOURCES))))


## COMPILE FLAGS

CFLAGS = -I$(MICROUI_DICT) -I..
CFLAGS += -O3 -g -Wall -pedantic -std=c11
CFLAGS += `sdl2-config --cflags`
LIBS = -lGL -lm `sdl2-config --libs`


## BUILD RULES

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


## HEAD FILE DEPENDENCIES

microui.o     : $(MICROUI_DICT)/microui.h
microui_demo.o: $(MICROUI_DICT)/microui.h ../microui_demo.h
renderer.o    : $(MICROUI_DICT)/microui.h ../renderer.h ../atlas.inl
main.o        : $(MICROUI_DICT)/microui.h ../microui_demo.h ../renderer.h

.PHONY: all clean
clean:
	rm -f $(EXE) $(OBJS)