NAME = libft.a

SRC = ft_isalnum.c\
      ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_strlen.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_atoi.c\
	  ft_bzero.c\
	  ft_calloc.c\
	  ft_itoa.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_memset.c\
	  ft_strchr.c\
	  ft_strdup.c\
	  ft_strjoin.c\
	  ft_strlcat.c\
	  ft_strlcpy.c\
	  ft_strncmp.c\
	  ft_strnstr.c\
	  ft_strrchr.c\
	  ft_substr.c\
	  ft_split.c\
	  ft_putnbr_fd.c\
	  ft_putendl_fd.c\
	  ft_putstr_fd.c\
	  ft_putchar_fd.c\
	  ft_striteri.c\
	  ft_strmapi.c\
	  ft_strtrim.c\
	  ft_memchr.c\

SRC_BONUS = ft_lstadd_front.c\
			ft_lstadd_back.c\
			ft_lstclear.c\
			ft_lstdelone.c\
			ft_lstiter.c\
			ft_lstlast.c\
			ft_lstnew.c\
			ft_lstsize.c\
			ft_lstmap.c\
	  

OBJ = $(SRC:.c=.o) 

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ) libft.h
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

bonus : $(OBJ) $(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean :
	rm -f $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re