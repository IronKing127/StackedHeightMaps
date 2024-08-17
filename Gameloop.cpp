#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

using namespace std;

int main(int, char* [])
{
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();

	ALLEGRO_DISPLAY* display = al_create_display(800, 600);
	if (!display)
	{
		return -1;
	}

	ALLEGRO_FONT* font = al_load_ttf_font("vertopal.com_8514fix.ttf", 64, 0);
	if (!font)
	{
		return -2;
	}

	al_clear_to_color(al_map_rgb(100, 100, 100));
	al_draw_text(font, al_map_rgb(0, 0, 0), 350, 250, 0, "Hello World");
	al_flip_display();
	al_rest(10);

	al_destroy_font(font);
	al_destroy_display(display);
	return 0;
}