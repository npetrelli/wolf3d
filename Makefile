NAME	=	wolf3d

SRC		=	init_sdl.c put_pixel_sdl.c destroy_sdl.c parse_map.c

$(NAME): all

SRC_FILES = $(addprefix src/, $(SRC))
all:
	@gcc main.c $(SRC_FILES) -I include -L lib -l SDL2 -lSDL2_image -I libft/includes -L libft -lft -o $(NAME)

clean:
	@rm -rf $(NAME)
