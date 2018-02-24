/*
*
* ------------------------------------------------------
* print header  
* ------------------------------------------------------
*
* author: Estefanio NS <estefanions AT gmail DOT com> 
* https://github.com/estefanions/header4c
*/

#include <stdarg.h>

#define TX_RED            "\x1B[31m"
#define TX_GREEN          "\x1B[32m"
#define TX_YELLOW         "\x1B[33m"
#define TX_GREENISH_BLUE  "\x1B[36m"
#define TX_RESET          "\033[0m"



/* print Line */
void printLn(int num = 1)
{
    int i = 0;

    for (i = 0; i < num; i++) 
    {
        printf("\n");
    }
}





/* print "-" */
void printDash(int num = 30)
{
    int i = 0;

    for (i = 0; i < num; i++) 
    {
        printf("-");
    }
}





/* print "-" (\n) */
void printDashLn(int num = 30)
{
    printDash(num);
    printLn();
}





/* print string (\n) */
void printFormatLn(const char* format, ...)
{
    va_list args;
    va_start( args, format );
    vfprintf( stderr, format, args );
    va_end( args );
    fprintf( stderr, "\n");
}





/* print string Success (\n) */
void printFormatSuccessLn(const char* format, ...)
{
    va_list args;
    fprintf( stderr, TX_GREEN);
    va_start( args, format );
    fprintf( stderr, "Done, ");
    vfprintf( stderr, format, args );
    va_end( args );
    fprintf( stderr, " :)");
    fprintf( stderr, TX_RESET);
    fprintf( stderr, "\n");
}





/* print string Warning (\n) */
void printFormatWarningLn(const char* format, ...)
{
    va_list args;
    fprintf( stderr, TX_YELLOW);
    va_start( args, format );
    fprintf( stderr, "Warning, ");
    vfprintf( stderr, format, args );
    va_end( args );
    fprintf( stderr, " :/");
    fprintf( stderr, TX_RESET);
    fprintf( stderr, "\n");
}





/* print string (\n) */
void printFormatErrorLn(const char* format, ...)
{
    va_list args;
    fprintf( stderr, TX_RED);
    va_start( args, format );
    fprintf( stderr, "Error, ");
    vfprintf( stderr, format, args );
    va_end( args );
    fprintf( stderr, " :(");
    fprintf( stderr, TX_RESET);
    fprintf( stderr, "\n");
}

/* printf string green color */
void printFormatGreen(const char* format, ...)
{
    va_list args;
    fprintf( stderr, TX_GREEN);
    va_start( args, format );
    vfprintf( stderr, format, args );
    va_end( args );
    fprintf( stderr, TX_RESET);
}


/* printf string yellow color */
void printFormatYellow(const char* format, ...)
{
    va_list args;
    fprintf( stderr, TX_YELLOW);
    va_start( args, format );
    vfprintf( stderr, format, args );
    va_end( args );
    fprintf( stderr, TX_RESET);
}


/* printf string red color */
void printFormatRed(const char* format, ...)
{
    va_list args;
    fprintf( stderr, TX_RED);
    va_start( args, format );
    vfprintf( stderr, format, args );
    va_end( args );
    fprintf( stderr, TX_RESET);
}



void printColorGreen()
{
    printf("%s", TX_GREEN);
}


void printColorYellow()
{
    printf("%s", TX_YELLOW);
}


void printColorRed()
{
    printf("%s", TX_RED);
}


void printColorGreenishBlue()
{
    printf("%s", TX_GREENISH_BLUE);
}



void printColorEnd()
{
    printf("%s", TX_RESET);
}



/* 
 * EOF
 */
