#include <stdio.h>
#include <stdlib.h>

void screen_clear() {
        #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
                system("clear");           
        #endif

        #if defined(__WIN32)
                system("cls");
        #endif
}

void screen_draw_title() {
        printf("----------------------------------\n");
        printf("|     Gestao de Equipamentos     |\n");
        printf("----------------------------------\n");
}
