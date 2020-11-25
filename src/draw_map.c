#include "wolf3d.h"

void            draw_map(t_map map, t_wolf3d *wolf)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	SDL_Rect r;
	t_color color;

	while (y < map.height)
	{
		x = 0;
		while (x < map.width)
		{
			if (map.map[y][x] == 1)
			{
				color.r = 0;
				color.g = 0;
				color.b = 128;
			}
			else
			{
				color.r = 0;
				color.g = 0;
				color.b = 100;
			}
			r.w = (SCREEN_WIDTH * SIZE_MAP) / map.width;
			r.h = (SCREEN_HEIGHT * SIZE_MAP) / map.height;
			r.x = x * r.w;
			r.y = y * r.h;

			SDL_SetRenderDrawColor( wolf->renderer, color.r, color.g, color.b, SDL_ALPHA_OPAQUE);
			SDL_RenderFillRect(wolf->renderer, &r);
			x++;
		}
		y++;
	}
}
