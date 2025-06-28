CC := /usr/bin/gcc
BDIR = ./.build/
SDIR = ./src/
FILES = first second third fourth

all: create_dir $(FILES)

$(FILES):
	@$(CC) -o $(BDIR)$@ $(SDIR)$(@:%=%.c)

create_dir:
	@./create_dir.sh

clean:
	@rm -fr .build
