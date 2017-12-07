/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"

 void 	trim (const char *source, char *trimmed_string){
   int lenght = strlen(source);
   bool isFalse = false;
   int countBlanks = 0;
   int i = 0;
   while(!isFalse){
     countBlanks++;
     i++;
     if(source[i] != ' '){
       isFalse = true;
     }
   }

   int countBlanksAfter = 0;
   i = strlen(source) - 1;
   while(!isFalse){
     countBlanksAfter++;
     i--;
     if(source[i] != ' '){
       isFalse = true;
     }
   }
   if(countBlanks > 1){
     int trimmedStringCount = 0;
     for(int i =  countBlanks; i < lenght - countBlanksAfter; i++){
       trimmed_string[trimmedStringCount] = source[i];
       trimmedStringCount++;
     }
   }
   else{
    strcpy(trimmed_string, source);
   }

 }
