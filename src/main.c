/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

char *read_map(char *path)
{
    // faite un open du path et un read du fichier puis return le contenu du fichier
}

char *append_str_with_char(char *str, char c)
{
    // ajouter le caractere c a la fin de la chaine str
}

void print_menu(char **tab_map)
{
    // afficher les differents chiffres centrer sur l'ecran
}

void print_map(char *str)
{
    // afficher la map
}

int main(void)
{
    char *tab_map[6] = {"1", "2", "3", "4", "5", NULL};
    int choise = 0;
    char *map = NULL;
    bool map_choose = false;

    initscr();
    noecho();
    cbreak();
    curs_set(0);
    refresh();

    while (1) {
        choise = getch();
        if (!map_choose) {
            print_menu(tab_map);
            switch(choise) {
                case // si on appuie sur 1:
                    map_choose = true;
                    map = read_map(append_str_with_char("./maps/map_", choise));
                    refresh();
                    break;
            }
        } else {
            print_map(map);
        }
        if (choise == //ECHAP){
            break; 
    }
    endwin();
}
