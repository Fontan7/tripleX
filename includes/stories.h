using std::string; 

bool Intro()
{   
    //namespace :: property
    ChangeColor(12);
    std::cout << "\n\n";
    std::cout << "   &&&&&&&&&&                                                     &&           && \n";
    std::cout << "   &&&&&&&&&&  |&&&&&&&     |&  |&&&&&&&    |&        |&&&&&&&       &       &    \n";     
    std::cout << "       &|      |&      &        |&      &   |&        |&               &   &      \n";   
    std::cout << "       &|      |&&&&&&&     |&  |&&&&&&&    |&        |&&&&&&            @        \n";
    std::cout << "       &|      |& &         |&  |&          |&        |&               &   &      \n";
    std::cout << "       &|      |&   &       |&  |&          |&        |&             &       &    \n";
    std::cout << "       &|      |&     &     |&  |&          |&&&&&&&  |&&&&&&&    &&           && \n";

    ChangeColor(7);
    std::cout << "\n            --Do you want to read the tutorial?  Y/N; ";
    std::cin >> UserResponseStr;
    Agree = StringRespCheck(toLower(UserResponseStr), "y");
    if(Agree)
    {
        //Tutorial();
    }
    
    ChangeColor(12);
    SlowPrint("\n\n            --ATTENTION-- YOU ARE ENTERING A RESTRICTED ZONE\n", 50);
    Print("\n            ");
    SlowPrint("--Do you want to continue?  Y/N; ", 50);
    ChangeColor(7);

    std::cin >> UserResponseStr;                                  
    Continue = StringRespCheck(toLower(UserResponseStr), "y");
    if(!Continue)
    {
        return false;
    }

    return true;
}

bool Lvl1()
{
    SlowPrint("\n+ You walk inside the dark room ", 70);
    SlowPrint(". . .\n", 100);
    SlowPrint("\n\n\n\n\n\n\n", 200);
    ChangeColor(12);
    SlowPrint("--The door shuts behind you\n", 40);
    ChangeColor(7);
    Sleep(2000);

    SlowPrint("+ It is very cold in here.\n", 80);
    SlowPrint("+ Completly silent, you can't even hear the world outside.\n\n", 70);
    Sleep(3000);
    SlowPrint("+ It smells like spoiled eggs.\n", 70);
    Sleep(500);
    SlowPrint("+ You almost can't see anything and think of using your lighter.\n", 70);
    Sleep(1000);

    Print("\n          --Use?  Y/N; ");
    std::cin >> UserResponseStr;
    Continue = StringRespCheck(toLower(UserResponseStr), "n");
    if(!Continue)
    {

        return 0;
    }

    SlowPrint("+ A few meters away you spot a light in the darkness.\n", 80);
    Sleep(1000);
    SlowPrint("+ You slowly walk towards it.", 80);
    SlowPrint("\n\n\n\n\n\n", 200);

    Print(" ________\n");
    ChangeColor(11);
    Print(" | 0-0-0 |\n");
    ChangeColor(7);
    Print(" |_9_8_7_|\n");
    Print(" |_6_5_4_|\n");
    Print(" |_3_2_1_|\n");
    Print(" |___0___|\n\n");
    SlowPrint("+ It is a digital door lock.\n\n", 70);

    SlowPrint("+ It looks pretty old and jagged.\n", 70);  
    SlowPrint("+ Next to the pannel are some numbers and letters carved into the wall.\n", 70);
    SlowPrint("+ It's hard to read...\n", 70);
    SlowPrint("+ It says...  \"If you hide your ignorance, no one will hit you and you'll never learn...\" \n", 70);
    SlowPrint("+ Right bellow that, the numbers 8 10 2 \n\n", 70);

    while (true)
    {
        Print(" ________\n");
        ChangeColor(11);
        Print(" | 0-0-0 |\n");
        ChangeColor(7);
        Print(" |_9_8_7_|\n");
        Print(" |_6_5_4_|\n");
        Print(" |_3_2_1_|\n");
        Print(" |___0___|\n\n");
        Print("--Code: ");
      
        std::cin >> UserCodeA >> UserCodeB >> UserCodeC;
        Continue = PannelCheck(UserCodeA, UserCodeB, UserCodeC, "812");
        if (Continue)
        {
            break;
        }
        
        SlowPrint("--Hint: the pannel only takes 3 single digit numbers separated by space or enter\n", 40);
    }
    Sleep(5000);


    return 1;
}

bool Lvl2()
{
    
    std::cout << "\n+ Enter the correct code in order to continue \n" ; 
    std::cout << "+ There are 3 numbers declared as const" << std::endl;
    std::cout << "+ They add up to: " << CodeSumFarenheit << std::endl;

    std::cout << "+ Enter any number separated by space and press enter" << std::endl;

    std::cin >> UserCodeA >> UserCodeB >> UserCodeC;
    int UserSum3 = UserCodeA + UserCodeB + UserCodeC;

    if(CodeSumFarenheit == UserSum3)
    {
        std::cout << "+ Congrats! you are a genius and skipped te last part of the game";
        return 1;
    }

    std::cout << "+ You entered: " << UserCodeA << UserCodeB << UserCodeC << std::endl;
    std::cout << "+ The sum of it is: " << UserSum3 << std::endl;
    
    return 1;
}