#
#

NOM=libmlx.a
SRC= mlx_shaders.c mlx_new_window.m mlx_init_loop.m mlx_new_image.m mlx_xpm.c mlx_int_str_to_wordtab.c
OBJ1=$(SRC:.c=.o)
OBJ=$(OBJ1:.m=.o)
CFLAGS+=-O2

all: $(NOM)

$(NOM):	$(OBJ)
	@printf "\e[33;m%s\e[0m\n" "    →  Compiling libmlx.a"
	@ar -r $(NOM) $(OBJ)
	@ranlib $(NOM)

clean:
	@printf "\e[35;m%s\e[0m\n" "    →  Removing tmp/obj files (libmlx.a)"
	@rm -f $(NOM) $(OBJ) *~
	@rm -f mlx_app

re: clean all
