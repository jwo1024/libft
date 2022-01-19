# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwolee <jiwolee@studnet.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 21:52:27 by jiwolee           #+#    #+#              #
#    Updated: 2022/01/19 21:52:49 by jiwolee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc
CFLAG	= -Wall -Wextra -Werror

AR		= ar
ARFLAGS	= crs

INCLUDES	= ./libft.h 

SRCS_1	= ft_isalpha.c\
		  ft_isdigit.c\
		  ft_isalnum.c\
		  ft_isprint.c\
		  ft_strlen.c\
		  ft_memset.c\
		  ft_bzero.c\
		  ft_memcpy.c\
		  ft_memmove.c\
		  ft_strlcpy.c\
		  ft_strchr.c\
		  ft_strrchr.c\
		  ft_tolower.c\
		  ft_toupper.c\
		  ft_atoi.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_strnstr.c\
		  ft_isascii.c\
		  ft_strdup.c\
		  ft_calloc.c\
		  ft_strlcat.c\
		  ft_strncmp.c

SRCS_2	= ft_substr.c\
		  ft_strjoin.c\
		  ft_strtrim.c\
		  ft_putchar_fd.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c\
		  ft_itoa.c\
		  ft_strmapi.c\
		  ft_striteri.c\
		  ft_putnbr_fd.c\
		  ft_split.c

SRCS_BN = ft_lstnew.c\
		  ft_lstadd_front.c\
		  ft_lstsize.c\
		  ft_lstlast.c\
		  ft_lstadd_back.c\
		  ft_lstdelone.c\
		  ft_lstclear.c\
		  ft_lstiter.c\
		  ft_lstmap.c

SRCS	= $(SRCS_1) $(SRCS_2) $(SRCS_BN)

OBJS	= $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BN:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^

 .PHONY : all clean fclean re
 
