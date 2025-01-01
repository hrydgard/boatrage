CC = g++
CCFLAGS = -w -fpermissive
LDFLAGS = `allegro-config --libs`
FILES = boatrage.cc control.cc mapedit.cc menu.cc menumagm.cc objects.cc player.cc sprite.cc tilemap.cc view.cc wrappers.cc
HEADERS = boatrage.h control.h data.h mapedit.h menu.h menumagm.h objects.h player.h sprite.h strings.h tilemap.h view.h wrappers.h

boatrage: $(FILES) $(HEADERS)
	$(CC) $(CCFLAGS) -o boatrage $(FILES) $(LDFLAGS)

clean:
	rm boatrage
