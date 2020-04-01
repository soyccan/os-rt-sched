CC := clang
CXX := clang++
CFLAGS := -Wall -Wextra -Wconversion -Iinclude
CXXFLAGS := -Wall -Wextra -Wconversion -Iinclude -std=c++17
# CFLAGS += -I/Users/soyccan/Documents/jserv_sysprog/linux-5.6-rc2/arch/x86/include
# CFLAGS += -I/Users/soyccan/Documents/jserv_sysprog/linux-5.6-rc2/arch/x86/include/uapi
# CFLAGS += -I/Users/soyccan/Documents/jserv_sysprog/linux-5.6-rc2/include
# CFLAGS += -I/Users/soyccan/Documents/jserv_sysprog/linux-5.6-rc2/include/uapi
ifdef DEBUG
	CFLAGS += -g
else
	# CFLAGS += -O2
endif

.PHONY: all
all: visualize

main: main.c
	$(CC) $(CFLAGS) -o $@ $^

aaa: aaa.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

run: aaa
	@./aaa < sample/input1 > out/output1

visualize: run
	@echo
	@echo Correct output
	@python visualize.py sample/output1

	@echo
	@echo My output
	@python visualize.py out/output1