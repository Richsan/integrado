CC := g++
CFLAGS := -g -Wall
LANGUAGE := cpp

DEPS := $(patsubst %.h, %.o, $(wildcard *.h))
DFILES := $(patsubst %.h, %.d, $(wildcard *.h))

ZIPNAME := programa

MAIN := main

all: $(DFILES) $(MAIN)

-include $(DFILES)


%.d: $(wildcard *.$(LANGUAGE))
	$(CC) -MM $(patsubst %.d, %.$(LANGUAGE), $@) -o $@


$(MAIN): $(DEPS) $(MAIN).$(LANGUAGE)

clean:
	rm -f *.o *.d *~ $(MAIN)

exe:
	./$(MAIN)

zip:
	zip $(ZIPNAME) $(wildcard *.$(LANGUAGE)) $(wildcard *.h) $(MAIN).$(LANGUAGE) Makefile

.PHONY: clean exe zip
