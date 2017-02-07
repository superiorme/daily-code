#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <stdio.h>
#include <allegro5/allegro_primitives.h>


int main()
{

	ALLEGRO_DISPLAY *display = NULL;

	al_init();

	al_init_primitives_addon();
	al_init_font_addon();

	display = al_create_display(1000, 800);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	
	
	ALLEGRO_FONT* font = al_create_builtin_font();
	
	

	al_draw_triangle(750, 450, 150, 550, 300, 25, al_map_rgb(0, 0, 100), 5);

	al_draw_text(font, al_map_rgb(255, 255, 255), 400, 300, ALLEGRO_ALIGN_CENTER, "yeld");

	al_flip_display();





	al_rest(10.0);




	al_destroy_display;



	return 0;

}