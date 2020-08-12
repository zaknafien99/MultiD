#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Multidimensional Arrays");

    // Create a 2D array
    int arr[2][3];

    // Fill the array
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            arr[i][j] = (i + 1) * (j + 1);

    // Print the array content
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            Console::Write("{0}", arr[i][j]);

        Console::WriteLine();
    }

    return 0;
}
