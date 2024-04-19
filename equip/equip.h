#ifndef EQUIP_H
#define EQUIP_H

#define MAX_ARRAY_SIZE 10

typedef struct Equipment {
    char name[20];
    float price;
    bool filled;
} Equipment;

int arr_add_item(Equipment *list, Equipment equip);
void equip_menu_add_item(Equipment *list);
void equip_menu_show_items(Equipment *list);
int equip_menu_show_main(Equipment *list);

#endif
