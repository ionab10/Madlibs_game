/*  Iona Buchanan 
February 12th
ICS3U Odecki
"Mad-libs" */

#include <stdio.h>
#include <stdlib.h>

int main() { 
    char strFemaleName[20] = "";
        printf("What is your mother's name?\n");
                     scanf("%s", &strFemaleName);
                     fflush(stdin);
    char strToy[20] = "";
        printf("What was your favourite toy as a child?\n");
                     gets(strToy);
    int iTime = 0;
        printf("How many people live in your home?\n");
                     scanf("%d", &iTime);
                     fflush(stdin);
    char strMornAct[30] = "";          
        printf("What was the first thing you did this morning (activity ending in -ing)?\n"); 
                     gets(strMornAct);
    int iFood = 0;
        printf("What is the fourth digit of your phone number?\n");
                     scanf("%d", &iFood);
                     fflush(stdin);
    char strAdj1[20] = "";
        printf("Enter an adjective:\n");              // enter any interesting adjective to make the story more funny
                     gets(strAdj1);
                                  
    char strFood[20] = "";
        printf("What is the last thing you had to eat (plural)?\n");
                     gets(strFood);
    float fDuration = 0;
        printf("About how tall are you (in metres)?\n");
                     scanf("%f", &fDuration);
                     fflush(stdin);
    char strTransport[20] = "";
        printf("Name a vehicle:\n");
                     gets(strTransport);
    char strAdj2[20] = "";
        printf("Enter an adjective:\n");
                     gets(strAdj2); 
    char strPair[20] = "";
        printf("Name a pair of characters from a movie/TV series/etc. (ex. Jack & Jill):\n");
                      gets(strPair);
    char strAdv1[20] = "";
        printf("Enter an adverb:\n");
                     gets(strAdv1); 
    char cModel = 'A';
        printf("What is your first initial?\n");
                     cModel = getchar();          
    int iModel = 0;
        printf("What is the highest mark you have received in a course?\n");
                     scanf("%d", &iModel);
                     fflush(stdin);
    char strParts[20] = "";
        printf("Name something made of plastic (plural):\n");
                     gets(strParts);
    int iMinions = 0;
        printf("What is your street number?\n");
                     scanf("%d", &iMinions);
                     fflush(stdin);
    char strMinions[20] = "";
        printf("Name a small animal (plural):\n");
                     gets(strMinions);
    char strAdj3[20] = "";
        printf("Enter an adjective:\n");
                     gets(strAdj3); 
    int iHours = 0;
        printf("On what date were you born? (ex. 31)\n");
                   scanf("%d", &iHours);
                   fflush(stdin);
    int iFract = 0;
        printf("What is the last digit of your phone number?\n");
                     scanf("%d", &iFract);
                     fflush(stdin);
    char strMaterial[20] = "";
         printf("Name a material that is solid at room temperature:\n");
                      gets(strMaterial);
    char strCountry[20] = "";
         printf("In which country were you born?\n");
                    gets(strCountry);
    char strIllegal[30] = "";
         printf("Name an illegal activity:\n");
                     gets(strIllegal);
    
    system("cls"); // clearing screen
                    
          
    //story starts here
    printf("\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
    printf("\n\n****************************************************************\n");
    printf("%s and the %s factory\n", strFemaleName, strToy); //title
    printf("****************************************************************\n\n");
    
    printf("Every morning, %s wakes up at %dam to go to work. ", strFemaleName, iTime); 
    printf("After %s, she eats %d %s %s for breakfast. ", strMornAct, iFood, strAdj1, strFood);
    printf("She then takes the %2.1f-hour %s-ride to the factory. ", fDuration, strTransport);
    printf("When she arrives, her two %s colleagues, %s, are there to greet her. ", strAdj2, strPair);
    printf("They all walk %s into the main control room and start up the %s-O-Matic %c-%d0. ", strAdv1, strToy, cModel, iModel); 
    printf("They stand back and watch the steady flow of %s along a conveyor belt, at the end of which, their %d %s carry them to another room. ", strParts, iMinions, strMinions);
    printf("The %s are melted down and poured into large %s molds and are set to cool for exactly %d 1/%d hours. ", strParts, strAdj3, iHours, iFract);
    printf("Finally, the %s individually package the finished products in %s containers. ", strMinions, strMaterial);
    printf("The %ss are then ready to be shipped off and sold in locations near you*.\n\n", strToy);
    
    printf("*Product not sold in %s due to laws against %s\n", strCountry, strIllegal); //fine print
    printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
    
    getchar();
    getchar();
    return(0);
}
