# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/17 11:51:35 by gloyer-p          #+#    #+#              #
#    Updated: 2021/11/02 11:03:54 by gloyer-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

SRCS_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

BONUS_OBJS	= ${SRCS_BONUS:.c=.o}

CC		= gcc

RM 		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

INCLUDE = libft.h

NAME	= libft.a

all:	${NAME}

$(NAME):	${OBJS} ${INCLUDE}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

bonus:	${NAME} ${BONUS_OBJS}
		ar rc ${NAME} ${BONUS_OBJS}
		ranlib ${NAME}

clean:	
		${RM} ${OBJS} ${BONUS_OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re bonus
