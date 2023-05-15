Rabota sus file-ove

kato se zatvori file minava ot 
RAM => hard diska 
Binarniq file a nai osnovniq
8 1/0 pravi 1 simvol
ascii tablicata e nai basic encoding tablica
utf 8 osnoven format

FILE * textfile = fopen("test.txt", "w") //opens file
fopen("ime na fila.razshirenie", "nachin na editvane (w,r etc)")

fopen(,r) samo za chetene, ako ne sushtestvuva -> NULL
fopen(,w) samo za pisane, ako nqma shte si napravi lol
//override-va go ako veche sushtestvuva 
fopen(,a) dobavqne na danni, ako ne sushtestuva shte suzdade
//ako go ima shte go otvori ama nqma da go prezapishe
fopen(,r+) reading + writing //iziskva faila da sushtestuva
fopen(,w+) writing + reading //ako sushtestuvva shte go prezapishe
fopen(,a+) append + reading //trqq ima file

if (textFile == NULL){
	printf("cannot open file \n");
	exit(0);
}
//proverka dali sme otvorili faila

fclose(textFile);
//zatvarq file

fprint(textFile, "%s %d %lf \n", "Ivan", 1, 5.5)
//shte napishe Ivan 1 5.5000 na faila

fputs("Nikolai\n", textFile);
//samo za string i go slaga v kraq na file-a

fputc('A', textFile);

int fscanf(FILE *stream, const char *format, ...);
//stream е указател към отворен файл, от който да се чете информацията
//format е форматиращият низ, който определя какво да се чете и в какъв формат да се прочете.

int main() {
    FILE *file = fopen("data.txt", "r");
    int num;

    if (file != NULL) {
        if (fscanf(file, "%d", &num) == 1) {
            printf("Прочетено число: %d\n", num);
        } else {
            printf("Грешка при четене от файл.\n");
        }
    return 0;
}

________________

char *fgets(char *str, int size, FILE *stream);
str е указател към масив от символи, в който ще бъде запазен прочетеният низ. 
size определя максималния брой символи, които fgets може да прочете. 
stream е указател към отворен файл, от който да се чете.
//Тя чете низ от символи от определен файл
///докато не се достигне зададена граница (максимален брой символи) ili nov red '\n'

#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r");
    char str[100];

    if (file != NULL) {
        if (fgets(str, sizeof(str), file) != NULL) {
            printf("Прочетен низ: %s\n", str);
        } else {
            printf("Грешка при четене от файл.\n");
        }

        fclose(file);
    } else {
        printf("Грешка при отваряне на файла.\n");
    }
    return 0;
}

____________________

int fgetc(FILE *stream);
//Функцията fgetc в C се използва за четене на един символ от файл. 
//Тя връща стойността на следващия символ от отворения файл.

#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r");
    int ch;

    if (file != NULL) {
        while ((ch = fgetc(file)) != EOF) {
            printf("%c", ch);
        }
        fclose(file);
    } else {
        printf("Грешка при отваряне на файла.\n");
    }
    return 0;
}










































