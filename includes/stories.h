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
        return 0;
    }

    return 1;
}

bool Lvl2()
{
    ClearScreen();
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
        ChangeColor(12);
        SlowPrint("\n--You saw for an instant the flame before your eyes, unfortunately the whole room exploded and you died", 50);
        ChangeColor(7);
        Sleep(1000);
        return 0;
    }

    SlowPrint("+ A few meters away you spot a light in the darkness.\n", 80);
    Sleep(1000);
    SlowPrint("+ You slowly walk towards it.", 80);
    SlowPrint("\n\n\n\n\n\n", 200);

    EmptyPannel();
    SlowPrint("\n\n+ It is a digital door lock.\n", 70);
    SlowPrint("+ It looks pretty old and jagged.\n", 70);  
    SlowPrint("+ Next to the pannel are some numbers and letters carved into the wall.\n", 70);
    SlowPrint("+ It's hard to read...\n", 70);
    ClearScreen();

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
      
        std::cin >> UCodeA >> UCodeB >> UCodeC;
        Continue = PannelCheck(UCodeA, UCodeB, UCodeC, "812");
        if (Continue)
        {
            break;
        }
        
        ClearScreen();
        SlowPrint("--Hint: the pannel only takes 3 single digit numbers separated by space or enter\n\n", 40);
        SlowPrint("+ It says...  \"If you hide your ignorance, no one will hit you and you'll never learn...\" \n", 40);
        SlowPrint("+ Right bellow that, the numbers 8 10 2 \n\n", 40);
    }
        
    return 1;
}

bool Lvl3()
{
    SlowPrint("--There are 3 numbers in the code\n", 40);
    SlowPrint("--The numbers sum is equal to; " + SSum + "\n", 40);
    SlowPrint("--The numbers multiplied are equal to; " + SMultip + "\n", 40);
    EmptyPannel();
    
    while (true)
    {
        std::cin >> UCodeA >> UCodeB >> UCodeC;
        Continue = PannelCheck(UCodeA, UCodeB, UCodeC, "812");
        if (Continue)
        {
            UsedPannel(true, to_string(UCodeA), to_string(UCodeB), to_string(UCodeC));
            SlowPrint("+ Eureka!", 40);
            Sleep(500);

            break;
        }

        ClearScreen();
        SlowPrint("--Hint: the pannel only takes 3 single digit numbers separated by space or enter\n\n", 40);
    }


    return 1;
}