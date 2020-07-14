using std::string; 

bool Intro()
{   
    AcsiiArt();
    Print("\n            --Do you want to read the tutorial?  Y/N; ");

    std::cin >> UserResponseStr;    
    if(RespCheck(toLower(UserResponseStr), "y"))
    {
        Tutorial();
        AcsiiArt();
    }
    
    ChangeColor(12);
    SlowPrint("\n\n            --ATTENTION-- YOU ARE ENTERING A RESTRICTED ZONE\n", 50);
    Print("\n            ");
    SlowPrint("--Do you want to continue?  Y/N; ", 50);
    ChangeColor(7);

    std::cin >> UserResponseStr;                                  
    if(!RespCheck(toLower(UserResponseStr), "y"))
    {
        return 0;
    }

    return 1;
}

bool Lvl2()
{
    ClearScreen();
    Print("You entered level ");
    std::cout << Level << "\n";

    SlowPrint("\n+ You walk inside the dark room ", 50);
    SlowPrint(". . .\n", 100);
    SlowPrint("\n\n\n\n\n\n\n", 200);
    ChangeColor(12);
    SlowPrint("--The door shuts behind you\n", 40);
    ChangeColor(7);
    Sleep(2000);

    SlowPrint("+ It is very cold in here.\n", 50);
    SlowPrint("+ Completly silent, you can't even hear the world outside.\n\n", 60);
    Sleep(2000);
    SlowPrint("+ It smells like spoiled eggs.\n", 50);
    Sleep(500);
    SlowPrint("+ You almost can't see anything and think of using your lighter.\n", 50);
    Sleep(1000);

    Print("\n          --Use?  Y/N; ");

    std::cin >> UserResponseStr;
    if(!RespCheck(toLower(UserResponseStr), "n"))
    {
        ChangeColor(12);
        SlowPrint("\n--You saw for an instant the flame before your eyes, unfortunately the whole room exploded and you died", 40);
        ChangeColor(7);
        Sleep(1000);
        return 0;
    }

    SlowPrint("+ A few meters away you spot a light in the darkness.\n", 50);
    Sleep(1000);
    SlowPrint("+ You slowly walk towards it.\n", 80);
    SlowPrint("\n\n\n\n\n\n", 200);
    
    SlowPrint("\n\n+ It is a digital door lock.\n", 50);
    SlowPrint("+ It looks pretty old and jagged.\n", 50);  
    SlowPrint("+ Next to the pannel are some numbers and letters carved into the wall.\n", 50);
    SlowPrint("+ It's hard to read...\n", 50);
    SlowPrint("+ It says...  \"If you hide your ignorance, no one will hit you and you'll never learn...\" \n", 70);
    SlowPrint("+ Right bellow that, the numbers 8 10 2 \n\n", 70);
    EmptyPannel();

    while (true)
    {
        std::cin >> UCodeA >> UCodeB >> UCodeC;
        if (PannelCheck(UCodeA, UCodeB, UCodeC, "812"))
        {
            break;
        }
        
        SlowPrint("--Hint: the pannel only takes 3 single digit numbers separated by space or enter\n\n", 40);
        SlowPrint("+ It says...  \"If you hide your ignorance, no one will hit you and you'll never learn...\" \n", 40);
        SlowPrint("+ Right bellow that, the numbers 8 10 2 \n\n", 40);
        Print("--Code: ");
        
    }
        
    return 1;
}

bool Lvl3()
{
    ClearScreen();
    Print("You entered level ");
    std::cout << Level << "\n";
    std::cout << CodeA << CodeB << CodeC << "\n";

    SlowPrint("--There are 3 numbers in the code\n", 40);
    SlowPrint("--The numbers sum is equal to; " + SSum + "\n", 40);
    SlowPrint("--The numbers multiplied are equal to; " + SMultip + "\n", 40);
    EmptyPannel();
    
    while (true)
    {
        std::cin >> UCodeA >> UCodeB >> UCodeC;
        if(PannelCheck(UCodeA, UCodeB, UCodeC, ""))
        {            
            break;
        }

        SlowPrint("--Hint: the pannel only takes 3 single digit numbers separated by space or enter\n\n", 40);
        Print("--There are 3 numbers in the code\n");
        Print("--The numbers sum is equal to; " + SSum + "\n");
        Print("--The numbers multiplied are equal to; " + SMultip + "\n");
        Print("--Code: ");

    }

    return 1;
}

bool Lvl4()
{
    ClearScreen();
    Print("You entered level ");

    std::cout << Level << "\n";
    std::cout << CodeA << CodeB << CodeC << "\n";

    SlowPrint("--There are 3 numbers in the code\n", 40);
    SlowPrint("--The numbers sum is equal to; " + SSum + "\n", 40);
    SlowPrint("--The numbers multiplied are equal to; " + SMultip + "\n", 40);
    EmptyPannel();

    while (true)
    {
        std::cin >> UCodeA >> UCodeB >> UCodeC;
        if (PannelCheck(UCodeA, UCodeB, UCodeC, ""))
        {
            break;
        }

        
        SlowPrint("--Hint: the pannel only takes 3 single digit numbers separated by space or enter\n\n", 40);
        Print("--There are 3 numbers in the code\n");
        Print("--The numbers sum is equal to; " + SSum + "\n");
        Print("--The numbers multiplied are equal to; " + SMultip + "\n");
        Print("--Code: ");
        

    }

    return 1;
}

bool Lvl5()
{
    ClearScreen();
    Print("You entered level ");
    std::cout << Level << "\n";

    std::cout << CodeA << CodeB << CodeC << "\n";

    SlowPrint("--There are 3 numbers in the code\n", 40);
    SlowPrint("--The numbers sum is equal to; " + SSum + "\n", 40);
    SlowPrint("--The numbers multiplied are equal to; " + SMultip + "\n", 40);
    EmptyPannel();

    while (true)
    {
        std::cin >> UCodeA >> UCodeB >> UCodeC;
        if (PannelCheck(UCodeA, UCodeB, UCodeC, ""))
        {
            break;
        }


        SlowPrint("--Hint: the pannel only takes 3 single digit numbers separated by space or enter\n\n", 40);
        Print("--There are 3 numbers in the code\n");
        Print("--The numbers sum is equal to; " + SSum + "\n");
        Print("--The numbers multiplied are equal to; " + SMultip + "\n");
        Print("--Code: ");


    }

    return 1;
}

bool PlayGame(int Level) //Rcieves the level to play and loads it
{
    switch (Level)
    {
    case 1:
        return LevelCleared = Intro();
        break;
    case 2:
        return LevelCleared = Lvl2();
        break;
    case 3:
        return LevelCleared = Lvl3();
        break;
    case 4:
        return LevelCleared = Lvl4();
        break;
    case 5:
        return LevelCleared = Lvl5();
        break;
    default:
        return 0;
        break;
    }
}