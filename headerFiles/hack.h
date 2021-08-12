void gotoxy(int,int);
void defaultError(int);
void intro(void);
#ifndef MAX_BUF
#define MAX_BUF 200
#endif
//function for changing the co-ordinates in console window
void gotoxy(int a, int b)
{
    COORD x;
    x.X=a;
    x.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);

}
void ExecutionOver()
{
    char path[MAX_BUF];

    char conectionWord[] = "Connecting...";

    getcwd(path, MAX_BUF);

    system("cls");

    printf("%s",conectionWord);

    Sleep(100);


    Beep(2000,150);

    system("Mode 1000");

    system("color 02");



  int  ErrCode = system(strcat(path,"\\pythonCode\\main.py"));

    defaultError(ErrCode);

    getch();

    intro();





}

void intro()
{

     char path[MAX_BUF];

    system("cls");

    gotoxy(30,10);

     getcwd(path, MAX_BUF);

    printf("Admin_Id@~\t");

    for(int i=0;i<=6;i++)
    {

        getch();
        printf("*");
        Beep(2000,150);
    }


    system("cls");

    for(int i =0;i<2;i++)
    system("ipconfig");

 int  ErrCode = system(strcat(path,"\\js\\index.html"));

    defaultError(ErrCode);

    system("color 01");

int  ErrCodee = system(strcat(path,"\\pythonCode\\opn.py"));

  defaultError(ErrCodee);
}


void defaultError(int dbs)
{

    if(dbs == 1)
    {
        printf("Path Error...\n");
        getch();
        exit(0);

    }
}
