#include <stdio.h>
#include <stdbool.h>
#include "../screen/screen.h"

#define MAX_ARRAY_SIZE 100

typedef struct Equipment {
        char name[20];
        float price;
        bool filled;
} Equipment;

int arr_add_item(Equipment *list, Equipment equip) {
                for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
                if (!list[i].filled) {
                        list[i] = equip;
                        list[i].filled = true;
                        break;
                }
        }

        return 0;
}

void equip_menu_add_item(Equipment *list) {
        Equipment equip;

        screen_clear();
        screen_draw_title();

        printf("Cadastrando Equipamento...\n\n");

        printf("Digite o nome do equipamento: ");
        scanf(" %s", equip.name);

        printf("Digite o preco do equipamento: ");
        scanf("%f", &equip.price); 

        getchar();

        arr_add_item(list, equip);

        printf("\n\nEquipamento '%s' cadastrado com sucesso!", equip.name);
}

void equip_menu_show_items(Equipment *list) {
        screen_clear();
        screen_draw_title();

        printf("Visualizando equipamentos cadastrados...\n\n");

        for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
                if (!list[i].filled)
                        continue;

                printf("%s %.2f\n", list[i].name, list[i].price);
        }
}

int equip_menu_show_main(Equipment *list) {
        char chosen_option;
        
        while (true) {
                screen_clear();
                screen_draw_title();

                printf("1 - Cadastrar Equipamento\n");
                printf("2 - Visualizar Equipamentos\n");
                printf("S - Voltar\n\n");

                printf("Escolha uma das opcoes: ");
                scanf(" %c", &chosen_option);
                getchar();

                if (chosen_option == 'S' || chosen_option == 's')
                        return 1;

                if (chosen_option == '1')
                        equip_menu_add_item(list);

                if (chosen_option == '2')
                        equip_menu_show_items(list);

                printf("\nPressione ENTER para continuar...");
                getchar();
        }

        return 0;
}

