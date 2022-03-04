/*
Yash Patel
AP Computer Science Principles Performance Task
2/18/22
*/

//Program Name:  Translating for Dummies made by a Dummy!
//program will lets user choose specific categories, then specific words, then translate those words into a language of their choosing (Spanish, Italian, French, German)

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
  
using namespace std;

//declaring functions
void clothing(); //function if user chooses clothing
void colors(); //function if user chooses colors
void sports(); //function if user chooses sports
void listOfWords(int max); //function for final list of learned words

string learnedWords[10]; //array for total learned words; max words you can learn is 10; outside of main to be used in multiple locations
int index = 0; //index for learned words array

int main() {

  int maxLength = 10; //variable that is set for the size of the array

  int run = 1; //run condition for do while (0 = false; 1 = true)

  cout << "\n----------Welcome to Translating 4 Dummiez!----------\n\n";

  do {
    string c = ""; //variable for user's choices

    cout << "Enter the category you want to translate.\nTo view learned words, press 'W'. To exit translator, enter 'X'.\n\n"; //user is prompted this repeatdely to learn words in different languages

    //user selects a category they want to find words in
    cout << setw(5) << left;
    cout << "A.)" << "Clothing\n";
    cout << setw(5) << left;
    cout << "B.)" << "Colors\n";
    cout << setw(5) << left; //setw used for formatting
    cout << "C.)" << "Sports\n";


    cout << "\nEnter category letter (A-C): "; //user enters letter corresponding to category of words user wants to learn
    cin >> c;

    if(c == "A" || c == "a") {
      clothing(); //calls function for clothing
    }
    if(c == "B" || c == "b") {
      colors(); //calls function for colors
    }
    if(c == "C" || c == "c") {
      sports(); //calls function for sports
    }

    else if(c == "X" || c == "x") {
      run = 0;  //false - exits do while loop
    }
    else if(c == "W" || c == "w") {
      if(learnedWords[0] != "") {
        cout << "\nLearned Words:\n";
        listOfWords(maxLength); //function that prints final list of words when user wants to view list or when user ends the program
      }
      else {
        cout << "You haven't learned any words yet.\n\n"; //if the learnedWords array is empty
      }
    }
    else {
      cout << "Please enter a valid option: (A-C), W or X.\n\n"; //user doesn't enter a valid input (error trapping)
    }
    if(index >= maxLength) {
      cout << "You've learnt enough words. Come back some other time.\n\n"; //mx limit of learning words in this program because the main array has an index of 10
      run = 0;
    }
  } while(run == 1);

  cout << "\nYou are a whole W! Here are your learnt words:\n";
  listOfWords(maxLength);

  cout << "\nThank you for running the Translating 4 Dummiez Program!\n";

}

void clothing() {
  cout << "\n";

  int c1 = 0;
  //types of clothing
  cout << setw(5) << left;
  cout << "1.)" << "Shirt\n";
  cout << setw(5) << left;
  cout << "2.)" << "Sweater\n";
  cout << setw(5) << left;
  cout << "3.)" << "Pants\n";
  cout << setw(5) << left;
  cout << "4.)" << "Socks\n";
  cout << setw(5) << left;
  cout << "5.)" << "Shoes\n"; //these will split off into subcategories for specific types

  cout << "\nEnter the number of the word you want to learn (1-5): ";
  cin >> c1;

  int cShirt = 0;
  if(c1 == 1) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Shirt' to? (1-4): ";
    cin >> cShirt; //user enters what language they want to translate 'Shirt' to

    if(cShirt == 1) {
      cout << "\n'Shirt' in Spanish is 'Camisa'.\n\n\n";
      learnedWords[index] = "Camisa"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cShirt == 2) {
      cout << "\n'Shirt' in Italian is 'Camicia'.\n\n\n";
      learnedWords[index] = "Camicia";
      index += 1; 
    }
    else if(cShirt == 3) {
      cout << "\n'Shirt' in German is 'Hemd'.\n\n\n";
      learnedWords[index] = "Hemd";
      index += 1; 
    }
    else if(cShirt == 4) {
      cout << "\n'Shirt' in French is 'Chemise'.\n\n\n";
      learnedWords[index] = "Chemise";
      index += 1; 
    }
  }

  int cSweater = 0;
  if(c1 == 2) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Sweater' to? (1-4): ";
    cin >> cSweater; //user enters what language they want to translate 'Sweater' to

    if(cSweater == 1) {
      cout << "\n'Sweater' in Spanish is 'Suéter'.\n\n\n";
      learnedWords[index] = "Suéter";
      index += 1; 
    }
    else if(cSweater == 2) {
      cout << "\n'Sweater' in Italian is 'Maglione'.\n\n\n";
      learnedWords[index] = "Maglione";
      index += 1; 
    }
    else if(cSweater == 3) {
      cout << "\n'Sweater' in German is 'Pulli'.\n\n\n";
      learnedWords[index] = "Pulli";
      index += 1; 
    }
    else if(cSweater == 4) {
      cout << "\n'Sweater' in French is 'Chandail'.\n\n\n";
      learnedWords[index] = "Chandail";
      index += 1; 
    }
  }
  
  int cPants = 0;
  if(c1 == 3) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Pants' to? (1-4): ";
    cin >> cPants; //user enters what language they want to translate 'Pants' to

    if(cPants == 1) {
      cout << "\n'Pants' in Spanish is 'Pantalones'.\n\n\n";
      learnedWords[index] = "Pantalones";
      index += 1; 
    }
    else if(cPants == 2) {
      cout << "\n'Pants' in Italian is 'Pantaloni'.\n\n\n";
      learnedWords[index] = "Pantaloni";
      index += 1; 
    }
    else if(cPants == 3) {
      cout << "\n'Pants' in German is 'Hose'.\n\n\n";
      learnedWords[index] = "Hose";
      index += 1; 
    }
    else if(cPants == 4) {
      cout << "\n'Pants' in French is 'Pantalon'.\n\n\n";
      learnedWords[index] = "Pantalon";
      index += 1; 
    }
  }

  int cSocks = 0;
  if(c1 == 4) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Socks' to? (1-4): ";
    cin >> cSocks; //user enters what language they want to translate 'Socks' to

    if(cSocks == 1) {
      cout << "\n'Socks' in Spanish is 'Calcetines'.\n\n\n";
      learnedWords[index] = "Calcetines";
      index += 1; 
    }
    else if(cSocks == 2) {
      cout << "\n'Socks' in Italian is 'Calzini'.\n\n\n";
      learnedWords[index] = "Calzini";
      index += 1; 
    }
    else if(cSocks == 3) {
      cout << "\n'Socks' in German is 'Socken'.\n\n\n";
      learnedWords[index] = "Socken";
      index += 1; 
    }
    else if(cSocks == 4) {
      cout << "\n'Socks' in French is 'Chaussettes'.\n\n\n";
      learnedWords[index] = "Chaussettes";
      index += 1; 
    }
  }

  int cShoes = 0;
  if(c1 == 5) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Shoes' to? (1-4): ";
    cin >> cShoes; //user enters what language they want to translate 'Shoes' to

    if(cShoes == 1) {
      cout << "\n'Shoes' in Spanish is 'Zapatos'.\n\n\n";
      learnedWords[index] = "Zapatos";
      index += 1; 
    }
    else if(cShoes == 2) {
      cout << "\n'Shoes' in Italian is 'Scarpe'.\n\n\n";
      learnedWords[index] = "Scarpe";
      index += 1; 
    }
    else if(cShoes == 3) {
      cout << "\n'Shoes' in German is 'Schuhe'.\n\n\n";
      learnedWords[index] = "Schuhe";
      index += 1; 
    }
    else if(cShoes == 4) {
      cout << "\n'Shoes' in French is 'Chaussures'.\n\n\n";
      learnedWords[index] = "Chaussures";
      index += 1; 
    }
  }

} //user choses different types of clothing and then chooses a language. Then, the word is printed in anotheer langauge

void colors() {
  cout << "\n";

  int c2 = 0;
  //types of colors
  cout << setw(5) << left;
  cout << "1.)" << "Red\n";
  cout << setw(5) << left;
  cout << "2.)" << "Blue\n";
  cout << setw(5) << left;
  cout << "3.)" << "Green\n";
  cout << setw(5) << left;
  cout << "4.)" << "Yellow\n";
  cout << setw(5) << left;
  cout << "5.)" << "Purple\n"; //these will split off into subcategories for specific types

  cout << "\nEnter the number of the word you want to learn (1-5): ";
  cin >> c2;

  int cRed = 0;
  if(c2 == 1) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Red' to? (1-4): ";
    cin >> cRed; //user enters what language they want to translate 'Red' to

    if(cRed == 1) {
      cout << "\n'Red' in Spanish is 'Rojo'.\n\n\n";
      learnedWords[index] = "Camisa"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cRed == 2) {
      cout << "\n'Red' in Italian is 'Rosso'.\n\n\n";
      learnedWords[index] = "Rosso";
      index += 1; 
    }
    else if(cRed == 3) {
      cout << "\n'Red' in German is 'Rot'.\n\n\n";
      learnedWords[index] = "Rot";
      index += 1; 
    }
    else if(cRed == 4) {
      cout << "\n'Red' in French is 'Rouge'.\n\n\n";
      learnedWords[index] = "Rouge";
      index += 1; 
    }
  }  

  int cBlue = 0;
  if(c2 == 2) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Blue' to? (1-4): ";
    cin >> cBlue; //user enters what language they want to translate 'Blue' to

    if(cBlue == 1) {
      cout << "\n'Blue' in Spanish is 'Azul'.\n\n\n";
      learnedWords[index] = "Azul"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cBlue == 2) {
      cout << "\n'Blue' in Italian is 'Blu'.\n\n\n";
      learnedWords[index] = "Blu";
      index += 1; 
    }
    else if(cBlue == 3) {
      cout << "\n'Blue' in German is 'Blau'.\n\n\n";
      learnedWords[index] = "Blau";
      index += 1; 
    }
    else if(cBlue == 4) {
      cout << "\n'Blue' in French is 'Bleu'.\n\n\n";
      learnedWords[index] = "Bleu";
      index += 1; 
    }
  }

  int cGreen = 0;
  if(c2 == 3) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Green' to? (1-4): ";
    cin >> cGreen; //user enters what language they want to translate 'Green' to

    if(cGreen == 1) {
      cout << "\n'Green' in Spanish is 'Verde'.\n\n\n";
      learnedWords[index] = "Verde"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cGreen == 2) {
      cout << "\n'Green' in Italian is 'Verde'.\n\n\n";
      learnedWords[index] = "Verde";
      index += 1; 
    }
    else if(cGreen == 3) {
      cout << "\n'Green' in German is 'Grün'.\n\n\n";
      learnedWords[index] = "Grün";
      index += 1; 
    }
    else if(cGreen == 4) {
      cout << "\n'Green' in French is 'Vert'.\n\n\n";
      learnedWords[index] = "Vert";
      index += 1; 
    }
  }

  int cYellow = 0;
  if(c2 == 4) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Yellow' to? (1-4): ";
    cin >> cYellow; //user enters what language they want to translate 'Yellow' to

    if(cYellow == 1) {
      cout << "\n'Yellow' in Spanish is 'Amarillo'.\n\n\n";
      learnedWords[index] = "Amarillo"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cYellow == 2) {
      cout << "\n'Yellow' in Italian is 'Giallo'.\n\n\n";
      learnedWords[index] = "Giallo";
      index += 1; 
    }
    else if(cYellow == 3) {
      cout << "\n'Yellow' in German is 'Gelb'.\n\n\n";
      learnedWords[index] = "Gelb";
      index += 1; 
    }
    else if(cYellow == 4) {
      cout << "\n'Yellow' in French is 'Jaune'.\n\n\n";
      learnedWords[index] = "Jaune";
      index += 1; 
    }
  }

  int cPurple = 0;
  if(c2 == 5) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Purple' to? (1-4): ";
    cin >> cPurple; //user enters what language they want to translate 'Purple' to

    if(cPurple == 1) {
      cout << "\n'Purple' in Spanish is 'Morado'.\n\n\n";
      learnedWords[index] = "Morado"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cPurple == 2) {
      cout << "\n'Purple' in Italian is 'Viola'.\n\n\n";
      learnedWords[index] = "Viola";
      index += 1; 
    }
    else if(cPurple == 3) {
      cout << "\n'Purple' in German is 'Violett'.\n\n\n";
      learnedWords[index] = "Violett";
      index += 1; 
    }
    else if(cPurple == 4) {
      cout << "\n'Purple' in French is 'Violet'.\n\n\n";
      learnedWords[index] = "Violet";
      index += 1; 
    }
  }

} //user choses different types of colors and then chooses a language. Then, the word is printed in anotheer langauge

void sports() {
  
  cout << "\n";

  int c3 = 0;
  //types of sports
  cout << setw(5) << left;
  cout << "1.)" << "Soccer\n";
  cout << setw(5) << left;
  cout << "2.)" << "Basketball\n";
  cout << setw(5) << left;
  cout << "3.)" << "Football\n";
  cout << setw(5) << left;
  cout << "4.)" << "Baseball\n";
  cout << setw(5) << left;
  cout << "5.)" << "Boxing\n"; //these will split off into subcategories for specific types

  cout << "\nEnter the number of the word you want to learn (1-5): ";
  cin >> c3;

  int cSoccer = 0;
  if(c3 == 1) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Soccer' to? (1-4): ";
    cin >> cSoccer; //user enters what language they want to translate 'Soccer' to

    if(cSoccer == 1) {
      cout << "\n'Soccer' in Spanish is 'Fútbol'.\n\n\n";
      learnedWords[index] = "Fútbol"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cSoccer == 2) {
      cout << "\n'Soccer' in Italian is 'Calcio'.\n\n\n";
      learnedWords[index] = "Calcio";
      index += 1; 
    }
    else if(cSoccer == 3) {
      cout << "\n'Soccer' in German is 'Fußball'.\n\n\n";
      learnedWords[index] = "Fußball";
      index += 1; 
    }
    else if(cSoccer == 4) {
      cout << "\n'Soccer' in French is 'Football'.\n\n\n";
      learnedWords[index] = "Football";
      index += 1; 
    }
  }

  int cBasketball = 0;
  if(c3 == 2) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Basketball' to? (1-4): ";
    cin >> cBasketball; //user enters what language they want to translate 'Basketball' to

    if(cBasketball == 1) {
      cout << "\n'Basketball' in Spanish is 'Baloncesto'.\n\n\n";
      learnedWords[index] = "Baloncesto"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cBasketball == 2) {
      cout << "\n'Basketball' in Italian is 'Pallacanestro'.\n\n\n";
      learnedWords[index] = "Calcio";
      index += 1; 
    }
    else if(cBasketball == 3) {
      cout << "\n'Basketball' in German is 'Basketball'.\n\n\n";
      learnedWords[index] = "Basketball";
      index += 1; 
    }
    else if(cBasketball == 4) {
      cout << "\n'Basketball' in French is 'Basketball'.\n\n\n";
      learnedWords[index] = "Basketball";
      index += 1; 
    }
  }

  int cFootball = 0;
  if(c3 == 3) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Football' to? (1-4): ";
    cin >> cFootball; //user enters what language they want to translate 'Football' to

    if(cFootball == 1) {
      cout << "\n'Football' in Spanish is 'Fútbol americano'.\n\n\n";
      learnedWords[index] = "Fútbol americano"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cFootball == 2) {
      cout << "\n'Football' in Italian is 'Football americano'.\n\n\n";
      learnedWords[index] = "Football americano";
      index += 1; 
    }
    else if(cFootball == 3) {
      cout << "\n'Football' in German is 'Amerikanischer Fußball'.\n\n\n";
      learnedWords[index] = "Amerikanischer Fußball";
      index += 1; 
    }
    else if(cFootball == 4) {
      cout << "\n'Football' in French is 'Football américain'.\n\n\n";
      learnedWords[index] = "Football américain";
      index += 1; 
    }
  }

  int cBaseball = 0;
  if(c3 == 4) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Baseball' to? (1-4): ";
    cin >> cBaseball; //user enters what language they want to translate 'Baseball' to

    if(cBaseball == 1) {
      cout << "\n'Baseball' in Spanish is 'Béisbol'.\n\n\n";
      learnedWords[index] = "Béisbol"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cBaseball == 2) {
      cout << "\n'Baseball' in Italian is 'Baseball'.\n\n\n";
      learnedWords[index] = "Baseball";
      index += 1; 
    }
    else if(cBaseball == 3) {
      cout << "\n'Baseball' in German is 'Baseball'.\n\n\n";
      learnedWords[index] = "Baseball";
      index += 1; 
    }
    else if(cBaseball == 4) {
      cout << "\n'Baseball' in French is 'Base-ball'.\n\n\n";
      learnedWords[index] = "Base-ball";
      index += 1; 
    }
  }

  int cBoxing = 0;
  if(c3 == 5) {
    cout << "\n";

    cout << setw(5) << left;
    cout << "1.)" << "Spanish\n";
    cout << setw(5) << left;
    cout << "2.)" << "Italian\n";
    cout << setw(5) << left;
    cout << "3.)" << "German\n";
    cout << setw(5) << left;
    cout << "4.)" << "French\n";

    cout << "\nWhat language do you want to translate 'Boxing' to? (1-4): ";
    cin >> cBoxing; //user enters what language they want to translate 'Boxing' to

    if(cBoxing == 1) {
      cout << "\n'Boxing' in Spanish is 'Boxeo'.\n\n\n";
      learnedWords[index] = "Boxeo"; //adds word to array 
      index += 1; //list goes up by 1 after adding word
    }
    else if(cBoxing == 2) {
      cout << "\n'Boxing' in Italian is 'Boxe'.\n\n\n";
      learnedWords[index] = "Boxe";
      index += 1; 
    }
    else if(cBoxing == 3) {
      cout << "\n'Boxing' in German is 'Boxen'.\n\n\n";
      learnedWords[index] = "Boxen";
      index += 1; 
    }
    else if(cBoxing == 4) {
      cout << "\n'Boxing' in French is 'Boxe'.\n\n\n";
      learnedWords[index] = "Boxe";
      index += 1; 
    }
  }

} //user choses different types of sports and then chooses a language. Then, the word is printed in anotheer langauge

void listOfWords(int max) { //function that prints receipt in cart and at the end
  for(int i = 0; i <= max; i++) {
    if(learnedWords[i] != "") { //if the array spot isn't empty
      cout << i + 1 << ".)  " << learnedWords[i] << endl;
    }
  }
  cout << "\n\n";
}