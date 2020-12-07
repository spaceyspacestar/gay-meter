#include <windows.h>
#include <winuser.h>
#include <stdio.h>
#include <time.h>

int APIENTRY WinMain( HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmdLine, int nCmdShow ) //For message boxes
{
    
    FreeConsole(); // This was for the other branch but we don't need this as of right now.

        int msgboxID = MessageBox(NULL, "Welcome to the Gay Meter!\nThis program will measure your gayness. \nAre you ready to roll?", "The Gay Meter", MB_ICONASTERISK | MB_YESNO);

        switch (msgboxID) //These are for yes or no.
        {
            case IDYES:
            MessageBox(NULL, "Wow. You actual fucking dick. You just broke my gay meter!!\nBut hear me out, I have the results before it broke! You are really super fucking gay oh my fucking lord bro!\nLike you love to suck only schlongs and date hot sexy men.\nHowever... You can recover your gayness but I'm not gonna help you since you broke my gay meter you gay ass. :>\nWith that I give you the best of lucks trying to become straight after the results you got. Gay boy.", "The Gay Meter", MB_ICONERROR | MB_OK); //This is so long LMFAO
            break;
            case IDNO:
            MessageBox(NULL, "Ok bye.", "Fucking meanie. :<", MB_OK);
            break;
        }
    
    srand (time(NULL));
    }
