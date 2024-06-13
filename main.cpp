#include <iostream>      
#include <string>       
#include <Windows.h> // Include the Windows library for Windows-specific functions
#include <mmsystem.h> // Include the mmsystem library for multimedia functions
using namespace std;

#pragma comment(lib, "winmm.lib")  // Link the winmm.lib library for multimedia functions

int main() {
    string i;
    int count = 0; // Counter for each alternate 'Enter click'
    do {
        getline(cin, i); // Getting input by the user
        if (count % 2 == 0) { //Playing the song the first time that Enter is pressed
           cout << "Music Now Playing...\n";
           PlaySound( // I used AI to comment lines 14-17
               TEXT("Mzg1ODMxNTIzMzg1ODM3_JzthsfvUY24.wav"), // The filename of the sound to be played
               NULL,                                         // Indicates the sound resource is specified by filename
               SND_FILENAME | SND_ASYNC | SND_LOOP           // Flags: SND_FILENAME (specifies filename), SND_ASYNC (play asynchronously), SND_LOOP (loop the sound)
           );
           count += 1; // Incramenting counter so that music pauses next time Enter is pressed
        }

        else {
            PlaySound(0, 0, 0); // Stops the music
            cout << "Music Paused...\n";
            count += 1; // Incramenting counter so that music plays next time Enter is pressed
        }


    } while (true);

}
