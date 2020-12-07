#include <windows.h>
#include <winuser.h>
#include <stdio.h>
#include <time.h>

//Will this ever work x.x
int APIENTRY WinMain( HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmdLine, int nCmdShow ){
    
    FreeConsole();

        int msgboxID = MessageBox(NULL, "Welcome to the Gay Meter!\nThis program will measure your gayness. \nAre you ready to roll?", "The Gay Meter", MB_ICONASTERISK | MB_YESNO);

        switch (msgboxID){
            case IDYES:
            MessageBox(NULL, "Wow. You actual fucking dick. You just broke my gay meter!!\nBut hear me out, I have the results before it broke! You are really super fucking gay oh my fucking lord bro!\nLike you love to suck only schlongs and date hot sexy men.\nHowever... You can recover your gayness but I'm not gonna help you since you broke my gay meter you gay ass. :>\nWith that I give you the best of lucks trying to become straight after the results you got. Gay boy.", "The Gay Meter", MB_ICONERROR | MB_OK);
            break;
            case IDNO:
            MessageBox(NULL, "Ok bye.", "Fucking meanie. :<", MB_OK);
            break;
        }
    
    srand (time(NULL));
    }
