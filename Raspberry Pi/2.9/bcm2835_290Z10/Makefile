CC=g++
DLIBS=-lbcm2835
epd:main.o epd2in9b.o imagedata.o epdif.o font8.o font12.o font16.o font20.o font24.o epdpaint.o
	$(CC) -Wall -o epd main.o epd2in9b.o imagedata.o epdif.o font8.o font12.o font16.o font20.o font24.o epdpaint.o $(DLIBS)
imagedata.o:imagedata.cpp imagedata.h 
	$(CC) -Wall -c imagedata.cpp $(DLIBS)
epd2in9b.o:epd2in9b.cpp epd2in9b.h
	$(CC) -Wall -c epd2in9b.cpp $(DLIBS)
epdif.o:epdif.cpp epdif.h
	$(CC) -Wall -c epdif.cpp $(DLIBS)
font8.o:fonts.h font8.c
	$(CC) -Wall -c font8.c
font12.o:fonts.h font12.c
	$(CC) -Wall -c font12.c
font16.o:fonts.h font16.c
	$(CC) -Wall -c font16.c
font20.o:fonts.h font20.c
	$(CC) -Wall -c font20.c
font24.o:fonts.h font24.c
	$(CC) -Wall -c font24.c
epdpaint.o:epdpaint.cpp epdpaint.h
	$(CC) -Wall -c epdpaint.cpp $(DLIBS)
main.o:main.cpp epd2in9b.h imagedata.h
	$(CC) -Wall -c main.cpp $(DLIBS)
clean:
	rm imagedata.o main.o epd2in9b.o epdif.o font8.o font12.o font16.o font20.o font24.o epdpaint.o epd

