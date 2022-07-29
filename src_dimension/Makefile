# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 16:43:24 by kyoulee           #+#    #+#              #
#    Updated: 2022/07/28 16:43:25 by kyoulee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libdimensional.a

CC = cc
CXXFLAGS = $(NULL)
CFLAGS = -Wall -Werror -Wextra
DFLAGS = $(NULL)
IFLAGS = -I $(INCLUDE_DIR)

## DIR ##

ROOTDIR = $(abspath $(dir $(word $(words $(MAKEFILE_LIST)),$(MAKEFILE_LIST))))
SRC_DIR = $(ROOTDIR)/src
SRC_AXIS_DIR = $(ROOTDIR)/src_axis
SRC_DIMENSIONAL_ZERO_DIR = $(ROOTDIR)/src_dimensional_zero
SRC_DIMENSIONAL_ONE_DIR = $(ROOTDIR)/src_dimensional_one
SRC_DIMENSIONAL_TWO_DIR = $(ROOTDIR)/src_dimensional_two
SRC_DIMENSIONAL_THREE_DIR = $(ROOTDIR)/src_dimensional_three
SRC_DIMENSIONAL_FOUR_DIR = $(ROOTDIR)/src_dimensional_four

OBJ_DIR = $(ROOTDIR)/obj
INCLUDE_DIR = $(ROOTDIR)/include

SRC_C_FILE =	ft_memset.c

SRC_C = $(addprefix $(SRC_DIR)/, $(SRC_C_FILE))

SRC_AXIS_C_FILE =	ft_axis_controller.c	\
					ft_axis_init.c			\
					ft_axis_view.c

SRC_AXIS_C = $(addprefix $(SRC_AXIS_DIR)/, $(SRC_AXIS_C_FILE))

SRC_DIMENSIONAL_ZERO_C_FILE =	ft_d_zero_new.c

SRC_DIMENSIONAL_ZERO_C = $(addprefix $(SRC_DIMENSIONAL_ZERO_DIR)/, $(SRC_DIMENSIONAL_ZERO_C_FILE))

SRC_DIMENSIONAL_ONE_C_FILE =	ft_d_one_addr.c		\
								ft_d_one_connect.c	\
								ft_d_one_connect1.c	\
								ft_d_one_head.c		\
								ft_d_one_new.c		\
								ft_d_one_switch.c

SRC_DIMENSIONAL_ONE_C = $(addprefix $(SRC_DIMENSIONAL_ONE_DIR)/, $(SRC_DIMENSIONAL_ONE_C_FILE))

SRC_DIMENSIONAL_TWO_C_FILE =	ft_d_two_addr.c		\
								ft_d_two_connect.c	\
								ft_d_two_connect1.c	\
								ft_d_two_connect2.c	\
								ft_d_two_connect_axis_one.c	\
								ft_d_two_connect_axis_two.c	\
								ft_d_two_head.c		\
								ft_d_two_new.c		\
								ft_d_two_switch.c

SRC_DIMENSIONAL_TWO_C = $(addprefix $(SRC_DIMENSIONAL_TWO_DIR)/, $(SRC_DIMENSIONAL_TWO_C_FILE))

SRC_DIMENSIONAL_THREE_C_FILE =	ft_d_three_addr.c		\
								ft_d_three_connect.c	\
								ft_d_three_connect1.c	\
								ft_d_three_connect2.c	\
								ft_d_three_connect3.c	\
								ft_d_three_connect_axis_three.c	\
								ft_d_three_connect_axis_two.c	\
								ft_d_three_head.c		\
								ft_d_three_new.c		\
								ft_d_three_switch.c

SRC_DIMENSIONAL_THREE_C = $(addprefix $(SRC_DIMENSIONAL_THREE_DIR)/, $(SRC_DIMENSIONAL_THREE_C_FILE))

SRC_DIMENSIONAL_FOUR_C_FILE =	ft_d_four_addr.c		\
								ft_d_four_connect.c		\
								ft_d_four_connect1.c	\
								ft_d_four_connect2.c	\
								ft_d_four_connect3.c	\
								ft_d_four_connect4.c	\
								ft_d_four_connect_axis_four.c	\
								ft_d_four_connect_axis_three.c	\
								ft_d_four_connect_axis_three_utils.c	\
								ft_d_four_head.c		\
								ft_d_four_new.c			\
								ft_d_four_switch.c

SRC_DIMENSIONAL_FOUR_C = $(addprefix $(SRC_DIMENSIONAL_FOUR_DIR)/, $(SRC_DIMENSIONAL_FOUR_C_FILE))

OBJS =	$(SRC_C:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)										\
		$(SRC_AXIS_C:$(SRC_AXIS_DIR)/%.c=$(OBJ_DIR)/%.o)							\
		$(SRC_DIMENSIONAL_ZERO_C:$(SRC_DIMENSIONAL_ZERO_DIR)/%.c=$(OBJ_DIR)/%.o)	\
		$(SRC_DIMENSIONAL_ONE_C:$(SRC_DIMENSIONAL_ONE_DIR)/%.c=$(OBJ_DIR)/%.o)		\
		$(SRC_DIMENSIONAL_TWO_C:$(SRC_DIMENSIONAL_TWO_DIR)/%.c=$(OBJ_DIR)/%.o)		\
		$(SRC_DIMENSIONAL_THREE_C:$(SRC_DIMENSIONAL_THREE_DIR)/%.c=$(OBJ_DIR)/%.o)	\
		$(SRC_DIMENSIONAL_FOUR_C:$(SRC_DIMENSIONAL_FOUR_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJS_CLEAN = $(OBJS)

all : $(OBJ_DIR) $(TARGET) 

$(TARGET) : $(OBJS)
	ar src $@ $^

$(OBJ_DIR) : 
	mkdir $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CPPFLAGS) $(IFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_AXIS_DIR)/%.c
	$(CC) $(CPPFLAGS) $(IFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIMENSIONAL_ZERO_DIR)/%.c 
	$(CC) $(CPPFLAGS) $(IFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_DIMENSIONAL_ONE_DIR)/%.c
	$(CC) $(CPPFLAGS) $(IFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_DIMENSIONAL_TWO_DIR)/%.c
	$(CC) $(CPPFLAGS) $(IFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_DIMENSIONAL_THREE_DIR)/%.c
	$(CC) $(CPPFLAGS) $(IFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_DIMENSIONAL_FOUR_DIR)/%.c
	$(CC) $(CPPFLAGS) $(IFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJS_CLEAN)

fclean : OBJS_CLEAN+=$(TARGET)
fclean : clean

re : fclean all

.PHONY: all clean fclean re