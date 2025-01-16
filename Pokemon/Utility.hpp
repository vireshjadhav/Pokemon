//Function to clear the console
void clearConsole()
{
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
}


//Function to wait for user to press Enter
void waitForEnter()
{
    cin.get();
}
