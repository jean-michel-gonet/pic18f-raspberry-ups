#ifndef FILE_H
#define	FILE_H

#define FILE_TAILLE 10

typedef struct {
    /** Espace de mémoire pour stocker la file. */
    char file[FILE_TAILLE];

    /** Pointeur d'entrée de la file. */
    unsigned char fileEntree;

    /** Pointeur de sortie de la file. */
    unsigned char fileSortie;

    /** Indique si la file est vide. */
    char fileVide;

    /** Indique si la file est pleine. */
    char filePleine;
} File;

void fileEnfile(File *file, char c);
char fileDefile(File *file);
char fileEstVide(File *file);
char fileEstPleine(File *file);
void fileReinitialise(File *file);

#ifdef TEST
int testeFile();
#endif

#endif
