#include <iostream>      
#include <string>       
#include <Windows.h> // Include the Windows library for Windows-specific functions
#include <mmsystem.h> // Include the mmsystem library for multimedia functions
using namespace std;     

#pragma comment(lib, "winmm.lib")  // Link the winmm.lib library for multimedia functions

int main() {
    
    cout << "Music is now playing...\n";

    // Play the specified sound file asynchronously and loop it continuously
    PlaySound( // I used AI to comment lines 14-17
        TEXT("Mzg1ODMxNTIzMzg1ODM3_JzthsfvUY24.wav"), // The filename of the sound to be played
        NULL,                                         // Indicates the sound resource is specified by filename
        SND_FILENAME | SND_ASYNC | SND_LOOP           // Flags: SND_FILENAME (specifies filename), SND_ASYNC (play asynchronously), SND_LOOP (loop the sound)
    );

    string inp;  // Declare a string variable to store user input

    // Waits for the user to press Enter
    getline(cin, inp);
    PlaySound(0, 0, 0); // Stops the music
    cout << "Music Paused...\n"; 

  
    getline(cin, inp); // Waits for the user to click Enter again
    cout << "Music Unpaused...\n";
    PlaySound(TEXT("Mzg1ODMxNTIzMzg1ODM3_JzthsfvUY24.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); //Song resumes


    // Final input
    getline(cin, inp);

}
