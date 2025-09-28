/*
    Programmer: Magnus Høgh             Date: 28-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Byt om på rækkefølgen af følgende kodestykker
    Ændrer dette betydningen af programmet? Uddrag en generel tommelfingerregel for ordningen af de logiske udtryk i en if-else kæde.
*/

// Find besvarelse nederst i programmet
// Helt nede!
// Bare stik dit hovede derned!

#include <stdio.h>

int topToBottom(void) {

  int percent, grade;

  printf("How many percent? ");
  scanf("%d",&percent);

  if (percent >= 90)
    grade = 11;
  else if (percent >= 82)
    grade = 10;
  else if (percent >= 74)
    grade = 9;
  else if (percent >= 66)
    grade = 8;
  else if (percent >= 58)
    grade = 7;
  else if (percent >= 50)
    grade = 6;
  else if (percent >= 40)
    grade = 5;
  else if (percent >= 10)
    grade = 3;
  else grade = 0; 

  printf("%d percent corresponds to the Danish grade %d\n\n", 
          percent, grade);
  
  return 0;
}


int bottomToTop(void) {

  int percent, grade;

  printf("How many percent? ");
  scanf("%d",&percent);

  if (percent >= 10)
    grade = 3;
  else if (percent >= 40)
    grade = 5;
  else if (percent >= 50)
    grade = 6;
  else if (percent >= 58)
    grade = 7;
  else if (percent >= 66)
    grade = 8;
  else if (percent >= 74)
    grade = 9;
  else if (percent >= 82)
    grade = 10;
  else if (percent >= 90)
    grade = 11;
  else grade = 0; 

  printf("%d percent corresponds to the Danish grade %d\n\n", 
          percent, grade);
  
  return 0;
}

int main(void)
{
    topToBottom();
    bottomToTop();
    return 0;
}

/*
    Umiddelbart er forskellen på de to programmer at, hvis du inputter noget lig 10 eller over vil resultatet altid være 3 og hvis det er under 10 så vil resultatet være 0
    Hvis du vil gøre som i bottomToTop skal du altså vende dit statement om og bruge <= og ikke >=.
    Ud fra, hvad man forventer sansynligheden for et givet resultat ville jeg lave programmet så den tjekker mindst muligt if's
    Så hvis jeg forventer 80 er det mest normale input så ville jeg bruge topToBottom og hvis jeg forventede 20 var mest normalt input ville jeg bruge bottomToTup med omvendte operator logik
    Tommelfingerreglen er I.S.M.E = (If, Større End, Mindre End,Else) 
*/