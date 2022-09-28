NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc $(CFLAGS) -c

SRCS = ft_isalnum.c \
		  ft_isdigit.c \
		  ft_memchr.c \
		  ft_memmove.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_strncat.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_isalpha.c \
		  ft_isprint.c \
		  ft_memcmp.c \
		  ft_memset.c \
		  ft_strcmp.c \
		  ft_strlcat.c \
		  ft_strncmp.c \
		  ft_strrchr.c \
		  ft_bzero.c \
		  ft_isascii.c \
		  ft_memccpy.c \
		  ft_memcpy.c \
		  ft_strcat.c \
		  ft_strcpy.c \
		  ft_strlen.c \
		  ft_strncpy.c \
		  ft_strstr.c \
		  ft_toupper.c \
		  ft_tolower.c

BNS_SRCS = ft_memalloc.c \
				 


OBJS = $(SRCS:%.c=%.o)

#BNS_OBJS = $(BNS_SRCS:%.c=%.o)


$(NAME): $(OBJS)
			$(CC) $(SRCS) -I./
			ar cr $(NAME) $(OBJS)

all: $(NAME)

#bonus: 

clean:
		rm -f $(OBJS) 

fclean: clean
		  rm -f $(NAME)

re: fclean all


#to create a static library we use :
# ar cr libraryName.a objectFiles
# gcc -c file1.c file2.c -I includes
# -I for the header