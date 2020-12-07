#include <windows.h>
#include <winuser.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

//Will this ever work x.x
int APIENTRY WinMain( HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmdLine, int nCmdShow ){


        int msgboxID = MessageBox(NULL, "Welcome to the Gay Meter!\nThis program will measure your gayness. \nAre you ready to roll?", "The Gay Meter", MB_ICONASTERISK | MB_YESNO);

        srand (time(NULL));

        int percentID = rand() % 100 + 1;

        switch (msgboxID){
            case IDYES:
            MessageBox(NULL, "Check the console to see your results.\nWhen you're done reading your number,\nhit enter to close the console.", "The Gay Meter", MB_ICONEXCLAMATION | MB_OK);
            do{
            cout << "You are " << percentID << " percent gay.\n";
            } while (cin.get () != '\n');
            break;
            case IDNO:
            MessageBox(NULL, "Ok bye.", "Fucking meanie. :<", MB_OK);
            break;
        }
    
    srand (time(NULL));
    }
