yams: main.o GereFichier.o GestionDes.o GereClic.o GestionAffichage.o Bouton.o GereScore.o libisentlib.a
	gcc -Wall main.o GereFichier.o GestionDes.o GereClic.o GestionAffichage.o Bouton.o GereScore.o -o yams libisentlib.a -lm -lglut -lGL -lX11

files: GenereFichiers.o GereFichier.o
	gcc -Wall GenereFichiers.o GereFichier.o -o files
	
main.o: main.c GfxLib.h BmpLib.h GestionDes.h GestionAffichage.h Bouton.h GereFichier.h
	gcc -Wall -c main.c

GestionDes.o: GestionDes.c GestionDes.h ESLib.h
	gcc -Wall -c GestionDes.c

GereClic.o: GereClic.c Bouton.h GereClic.h GfxLib.h BmpLib.h GestionDes.h GereScore.h GereFichier.h GereScore.h
	gcc -Wall -c GereClic.c
	
GestionAffichage.o: GestionAffichage.c GfxLib.h GestionAffichage.h GestionDes.h Bouton.h BmpLib.h GereScore.h
	gcc -Wall -c GestionAffichage.c

GenereFichiers.o: GenereFichiers.c GfxLib.h Bouton.h GereFichier.h GereScore.h
	gcc -Wall -c GenereFichiers.c

GereFichier.o: GereFichier.c GereFichier.h Bouton.h
	gcc -Wall -c GereFichier.c

Bouton.o: Bouton.c Bouton.h GfxLib.h
	gcc -Wall -c Bouton.c

GereScore.o: GereScore.c GereScore.h GestionDes.h Bouton.h
	gcc -Wall -c GereScore.c

libisentlib.a: BmpLib.o ErreurLib.o ESLib.o GfxLib.o OutilsLib.o SocketLib.o ThreadLib.o TortueLib.o VectorLib.o WavLib.o
	ar r libisentlib.a BmpLib.o ErreurLib.o ESLib.o GfxLib.o OutilsLib.o SocketLib.o ThreadLib.o TortueLib.o VectorLib.o WavLib.o
	ranlib libisentlib.a

BmpLib.o: BmpLib.c BmpLib.h OutilsLib.h
	gcc -Wall -O2 -c BmpLib.c

ESLib.o: ESLib.c ESLib.h ErreurLib.h
	gcc -Wall -O2 -c ESLib.c

ErreurLib.o: ErreurLib.c ErreurLib.h
	gcc -Wall -O2 -c ErreurLib.c

GfxLib.o: GfxLib.c GfxLib.h ESLib.h
	gcc -Wall -O2 -c GfxLib.c -I/usr/include/GL
# Sous MacOSX, commenter la ligne de commande ci-dessus (en mettant un # au debut)
# et de-commenter la ligne de commande ci-apres :
#	gcc -Wall -O2 -c GfxLib.c -Wno-deprecated-declarations

OutilsLib.o: OutilsLib.c OutilsLib.h
	gcc -Wall -O2 -c OutilsLib.c

SocketLib.o: SocketLib.c SocketLib.h
	gcc -Wall -O2 -c SocketLib.c

ThreadLib.o: ThreadLib.c ThreadLib.h
	gcc -Wall -O2 -c ThreadLib.c

TortueLib.o: TortueLib.c TortueLib.h GfxLib.h
	gcc -Wall -O2 -c TortueLib.c

VectorLib.o: VectorLib.c VectorLib.h
	gcc -Wall -O2 -c VectorLib.c -msse3

WavLib.o: WavLib.c WavLib.h OutilsLib.h
	gcc -Wall -O2 -c WavLib.c -Wno-unused-result
# Sous MacOSX, commenter la ligne de commande ci-dessus (en mettant un # au debut)
# et de-commenter la ligne de commande ci-apres :
#	gcc -Wall -O2 -c WavLib.c

zip:
	tar -cvzf libisentlib.tgz *.[ch] *.bmp *.pdf makefile

clean:
	rm -f *~ *.o

deepclean: clean
	rm -f tpgraph exempleTortue libisentlib.a
