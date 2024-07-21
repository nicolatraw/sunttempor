#include "GameFramework/Pawn.h"
#include "Templates/ObjectPtr.h"

// Assume this code is part of a class or a function
TObjectPtr<APawn> PlayerPawn;

// Later in your code, you can assign a pawn to PlayerPawn
APawn* NewPlayerPawn = ...; // Get or create a pawn object
PlayerPawn = NewPlayerPawn; // Assign the pawn to the TObjectPtr

// Accessing properties or calling methods of the pawn
if (PlayerPawn.IsValid()) {
    PlayerPawn->MoveToLocation(NewLocation);
}
