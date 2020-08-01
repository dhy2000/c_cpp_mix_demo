# A Makefile for C and C++ Mixed Project

# Target program name
# You can change it into the actual project name, and be awareness on your OS.
target = main.exe

# Compiler
ccompiler = gcc
cppcompiler = g++
# Build Dirs
bindir = build/bin
objdir = build/obj

# Sources
csrc = $(wildcard *.c)
cppsrc = $(wildcard *.cpp)
# Headers
headers = $(wildcard *.h *.hpp)
# Objects
cobj = $(addprefix $(objdir)/,$(patsubst %.c,%.o,$(notdir $(csrc))))
cppobj = $(addprefix $(objdir)/,$(patsubst %.cpp,%.o,$(notdir $(cppsrc))))
# cobj = $(csrc:%.c=$(objdir)/%.o)
# cppobj = $(cppsrc:%.cpp=$(objdir)/%.o)

# Compile Options
cflags = -std=c99 -O2
cppflags = -std=c++11 -O2

# Link Objects to Executable File
$(target): $(cobj) $(cppobj)
	@$(cppcompiler) -g -o $(bindir)/$@ $^

# Compile Sources to Objects
$(cppobj): $(objdir)/%.o: %.cpp $(headers)
	@$(cppcompiler) -g -c $(cppflags) -o $@ $<

$(cobj): $(objdir)/%.o: %.c $(headers)
	@$(ccompiler) -g -c $(cflags) -o $@ $<

run:
	@$(bindir)/$(target)

