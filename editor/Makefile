SHELL = /bin/sh
TARGET = bin/easyrpg
CC = g++
SRCS =  src/*.cpp
CFLAGS = -O3 -s -Wall -Wextra -ansi $(shell wx-config --cxxflags --unicode=yes --debug=no)
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti

LIBS = -lSDL_mixer -lSDL_gfx -lSDL_ttf -lSDL_image -lz $(shell wx-config --libs --unicode=yes --debug=no)

all:
	$(CC) -o $(TARGET) $(SRCS) $(CXXFLAGS) $(LIBS)
clean:
	rm -f $(TARGET)
