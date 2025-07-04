# List of all the board related files.
BOARDSRC = $(CHIBIOS)/os/hal/boards/M144Z_M4/board.c

# Required include directories
BOARDINC = $(CHIBIOS)/os/hal/boards/M144Z_M4

# Shared variables
ALLCSRC += $(BOARDSRC)
ALLINC  += $(BOARDINC)
