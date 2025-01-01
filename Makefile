CC = g++
CCFLAGS = -w -fpermissive
LDFLAGS = `allegro-config --libs`
FILES = boatrage.cc control.cc mapedit.cc menu.cc menumagm.cc objects.cc player.cc sprite.cc tilemap.cc view.cc wrappers.cc

boatrage: $(FILES)
	$(CC) $(CCFLAGS) -o boatrage $(FILES) $(LDFLAGS)

clean:
	rm boatrage
