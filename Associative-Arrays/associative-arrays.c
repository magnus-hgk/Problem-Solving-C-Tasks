/*
    Programmer: Magnus Høgh             Date: 17-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25


    Et array i C indiceres altid med et heltal, hvilket sikrer simpel og effektiv tilgang til elementer i arrayet. Men i mange sammenhænge er det fristende og nyttigt at indicere et array med værdier af andre typer, så som en tekststreng.

    Lad os eksempelvis antage at vi ønsker at holde styr på alderen af navngivne personer ved brug af et array, alder_af_person. For "Peter" kan vi dermed tilgå alderen med alder_af_person["Peter"] .

    alder_af_person kan ikke være et array i C, men konceptuelt kan vi opfatte alder_af_person som et associativt array: Et sådant array associerer navnet på en person med personen alder. Generelt giver det god mening, på denne måde, at associere en vilkårlig værdi/objekt s af typen S til en værdi t i typen T via et associativt array a. Vi slår T-værdien op med a[s], givet s i typen S.

    Spørgsmålet er nu hvordan vi kan bruge arrays i C til at arbejde med associative arrays. Ideen er simpel nok. Lad os illustrere den med S som en teksstreng, og T som int, og a som alder_af_person. Personens navn skal først, med en funktionen h, konverteres til et lovligt indeks i et C-array. h("Peter") skal returnere et ikke-negativt heltal, nemlig det heltal hvor alderen af "Peter" skal findes. Hermed kan vi fra pesonens navn, "Peter", tilgå Peter's navn med

    alder[h("Peter")]
    hvor alder er et C array:_

    int alder[MAX_PESON_INDEX];
    Hvis vi først antager at vi har et lille univers af mulige tekststrenge, kan vi ret let skrive en h-funktion , som eksplicit afbilder et navn (en streng) til et indeks (et heltal). Denne h-funktion sikrer at hver tekststreng tildeles hvert sit indeks. Skriv en sådan h -funktion for navnene på dine medstuderende i din projektgruppe, således at du kan indsætte og slå alderen af en studerende op i et associativt array (undgå danske bogstaver i navnene).

    Hvis vi derimod antager at vi har et meget stort univers af mulige teksstrenge, så som hele Danmarks befolkning, bliver det meget besværligt at skrive funktionen h . Hvis vi forsøger vil det sikkert også bliver meget dyrt at kalde den, fordi funktionen muligvis vil lave et arbejde proportionalt med befolkningens størrelse. Men vi kan forsøge at beregne et passende heltal ud fra tegnene i personens navn, og normalisere tallet til et indeks i det ønskede interval. (Funktionen kan eksempelvis tage alle, eller udvalgte, tegn i navnet, addere dem som de små heltal de jo er, og normalisere summet med modulo operatoren). Problemet er nu, at to forskelle navne kan afbildes til det samme indeks. Vi siger at der sker en kollision.

    Skriv, som en øvelse, en h-funktion efter denne ide, og prøv den af på navnene i jeres projektgruppe. Oplever I kollisionsproblemet i denne øvelse?

    Vi har med dette introduceret ideen om hashtabeller og hashfunktioner , som er vigtige i mange praktiske sammenhænge, hvor vi også skal udtænke strategier til håndtering af kollision.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PERSON_INDEX 500
#define MAX_NAME_SIZE 50
#define NOT_VALID_INPUT 0
#define MAX_NAME_ASCII_VALUE 5425
#define MIN_LETTER_ASCII_VALUE 65
#define MAX_EXPECTED_ASCII_VALUE 1000

void destroyBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) 
    {
        // discards remaining characters on the line by using them in an emty while loop
    }
}


int createIndex(char string[])
{
    int index = 0, i = 0;

    int integer_array[MAX_NAME_SIZE];

    while (string[i] != '\0')
    {
        integer_array[i] = (int)(string[i]);
        index += integer_array[i];
        i++;
    }
    printf("Index: %d\n", index);
    index = (int)(MAX_PERSON_INDEX * (((double)index - (double)MIN_LETTER_ASCII_VALUE) / (double)MAX_EXPECTED_ASCII_VALUE));
    printf("Index: %d\n", index);
    return index;
}

void putArray(char array[])
{   
    char name[MAX_NAME_SIZE];
    int age, index;

    printf("Please input name: ");
    scanf(" %s", name);

    printf("Please input age: ");
    scanf(" %d", &age);

    index = createIndex(name);
    array[index] = age;

    printf("%d saved at index %s\n", age, name);
}

void getArray(char array[])
{
    char name[MAX_NAME_SIZE];
    int age, index;

    printf("Please input name: ");
    scanf("\n %s", name);

    index = createIndex(name);
    age = array[index];

    printf("%s is %d years old\n", name, age);
}


void runProgram()
{
    int mode = NOT_VALID_INPUT, valid_input = NOT_VALID_INPUT; 
    char age[MAX_PERSON_INDEX];

    while (mode != 3) 
    {
        do 
        {
            printf("Please choose a mode:\n[1] Store an age\n[2] Retrieve an age\n[3] quit\n");
            valid_input = scanf("\n %d", &mode);

            if (!valid_input) destroyBuffer();

        } while (!valid_input);


        switch (mode)
        {
        case 1:
            putArray(age);
            break;
        
        case 2:
            getArray(age);
            break;
        
        case 3:
            exit(EXIT_SUCCESS);
            break;
            
        default:
            printf("EF\n");
            exit(EXIT_FAILURE);
            break;
        }
    }

}

int main(void)
{
    runProgram();


    return 0;
}
