#include <iostream>
#include "../include/storyLvl1.h"
#include "../include/storyLvl2.h"
#include "../include/storyLvl3.h"

using std::string;

int Intro(int Level)
{   
    //namespace :: property
    std::cout << "\n\n";
    std::cout << " &&&&&&&&&&                                                     &&           && \n";
    std::cout << " &&&&&&&&&&  |&&&&&&&     |&  |&&&&&&&    |&        |&&&&&&&       &       &    \n";     
    std::cout << "     &|      |&      &        |&      &   |&        |&               &   &      \n";   
    std::cout << "     &|      |&&&&&&&     |&  |&&&&&&&    |&        |&&&&&&            @        \n";
    std::cout << "     &|      |& &         |&  |&          |&        |&               &   &      \n";
    std::cout << "     &|      |&   &       |&  |&          |&        |&             &       &    \n";
    std::cout << "     &|      |&     &     |&  |&          |&&&&&&&  |&&&&&&&    &&           && \n";

    std::cout << "\n\n          --ATTENTION-- YOU ARE ENTERING A RESTRICTED ZONE                  \n";

    return Level++;
}


bool PlayGame(int Level)
{ 
  while(true){ 
    switch(Level) {
    case  0  :
      Level = Intro(Level);
      break; //optional
   case  1  :
      Level = Level1(Level);
      break; //optional
    case  2  :
      Level = Level2(Level);
      break; //optional
    case  3  :
      Level = Level3(Level);
      break; //optional
  
  std::cout << "you cycled every level";
    }
  }

  return 1;
}


int main()
{
    int Level = 0;
    while(true)
    {
        bool LevelCleared = PlayGame(Level);
        
        std::cin.clear(); //clears any errors
        std::cin.ignore(); //discards the buffer

        if (LevelCleared)
        {
            ++Level;
        }
        
    }
    
    return 0;
}


/*
int stringPrinter (string phrase) 
{
    int strLength = phrase.length();

    return 0;
}
*/