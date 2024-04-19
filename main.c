#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "screen/screen.h"
#include "equip/equip.h"

int main() {
	Equipment *equipments = malloc(MAX_ARRAY_SIZE * sizeof(Equipment));

	char chosen_option;

	while (true) {
		screen_clear();
		screen_draw_title();

		printf("1 - Gerenciar Equipamentos\n");
		printf("2 - Gerenciar Chamados\n");
		printf("S - Sair\n\n");

		printf("Escolha uma das opcoes: "); 
		scanf(" %c", &chosen_option);

		if (chosen_option == 'S' || chosen_option == 's')
			break;

		if (chosen_option == '1')
			equip_menu_show_main(equipments);
	}

	free(equipments);

	return 0;
}
