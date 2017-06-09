# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/03 18:39:00 by qloubier          #+#    #+#              #
#    Updated: 2017/06/09 09:06:21 by qloubier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OPSYS=$(shell uname -s)
CC=clang
CFLAGS=-Wall -Werror -Wextra
ifndef CC
	CC=clang
endif

ifndef config
	config	= release
endif
ifeq ($(config),debug)
	CFLAGS	+= -g -fsanitize=address
	LIBSUFIX= D
endif
ifeq ($(config),release)
	CFLAGS	+= -Ofast
	LIBSUFIX=
endif

CHECK_MODE=off
NAME=libmathex.a
INCDIR=-I./include
SILENT= @
ifeq ($(OPSYS),Linux)
	CFLAGS += -Wno-strict-aliasing
endif
ifeq ($(CC),clang)
	CFLAGS += -Weverything
endif
SRCS=utils/utils.c\
	utils/utilsf.c\
	utils/utilsfrac.c\
	utils/utilsu.c\
	utils/swap.c\
	binary/bitaprox.c\
	fixed/fromfixed.c\
	fixed/tofixed.c\
	fixed/toifixed.c\
	transform/matf_multiply.c\
	transform/matf_project.c\
	transform/matf_invert.c\
	transform/matf_rot.c\
	transform/matf_rotx.c\
	transform/matf_roty.c\
	transform/matf_rotz.c\
	transform/matf_scale.c\
	transform/matf_scalv.c\
	transform/matf_trans.c\
	transform/matf_utils.c\
	transform/matd_multiply.c\
	transform/matd_invert.c\
	transform/matd_rot.c\
	transform/matd_rotx.c\
	transform/matd_roty.c\
	transform/matd_rotz.c\
	transform/matd_scale.c\
	transform/matd_scalv.c\
	transform/matd_trans.c\
	transform/matd_utils.c\
	vector/swapf.c\
	vector/swapd.c\
	vector/sortd.c\
	vector/sortf.c\
	vector/swapi.c\
	vector/tov4f.c\
	vector/tov4d.c\
	vector/tov4i.c\
	vector/uv.c\
	vector/color/convert.c\
	vector/vec2d/add2i.c\
	vector/vec2d/add2f.c\
	vector/vec2d/add2d.c\
	vector/vec2d/sub2i.c\
	vector/vec2d/sub2f.c\
	vector/vec2d/sub2d.c\
	vector/vec2d/tov2d.c\
	vector/vec2d/normalize.c\
	vector/vec2d/dot.c\
	vector/vec2f/add2i.c\
	vector/vec2f/add2f.c\
	vector/vec2f/add2d.c\
	vector/vec2f/sub2i.c\
	vector/vec2f/sub2f.c\
	vector/vec2f/sub2d.c\
	vector/vec2f/tov2f.c\
	vector/vec2f/normalize.c\
	vector/vec2f/dot.c\
	vector/vec2i/add2i.c\
	vector/vec2i/add2f.c\
	vector/vec2i/add2d.c\
	vector/vec2i/sub2i.c\
	vector/vec2i/sub2f.c\
	vector/vec2i/sub2d.c\
	vector/vec2i/mul2i.c\
	vector/vec2i/mul2f.c\
	vector/vec2i/mul2d.c\
	vector/vec2i/div2i.c\
	vector/vec2i/div2f.c\
	vector/vec2i/div2d.c\
	vector/vec2i/tov2i.c\
	vector/vec3d/add3f.c\
	vector/vec3d/add3d.c\
	vector/vec3d/add3i.c\
	vector/vec3d/div3f.c\
	vector/vec3d/div3d.c\
	vector/vec3d/div3i.c\
	vector/vec3d/mul3f.c\
	vector/vec3d/mul3d.c\
	vector/vec3d/mul3i.c\
	vector/vec3d/sub3f.c\
	vector/vec3d/sub3d.c\
	vector/vec3d/sub3i.c\
	vector/vec3d/normalize.c\
	vector/vec3d/dot.c\
	vector/vec3d/cross.c\
	vector/vec3f/add3f.c\
	vector/vec3f/add3d.c\
	vector/vec3f/add3i.c\
	vector/vec3f/div3f.c\
	vector/vec3f/div3d.c\
	vector/vec3f/div3i.c\
	vector/vec3f/mul3f.c\
	vector/vec3f/mul3d.c\
	vector/vec3f/mul3i.c\
	vector/vec3f/sub3f.c\
	vector/vec3f/sub3d.c\
	vector/vec3f/sub3i.c\
	vector/vec3f/normalize.c\
	vector/vec3f/dot.c\
	vector/vec3f/cross.c\
	vector/vec3i/add3f.c\
	vector/vec3i/add3d.c\
	vector/vec3i/add3i.c\
	vector/vec3i/div3f.c\
	vector/vec3i/div3d.c\
	vector/vec3i/div3i.c\
	vector/vec3i/mul3f.c\
	vector/vec3i/mul3d.c\
	vector/vec3i/mul3i.c\
	vector/vec3i/sub3f.c\
	vector/vec3i/sub3d.c\
	vector/vec3i/sub3i.c\
	vector/vec3f/tov3f.c\
	vector/vec3d/tov3d.c\
	vector/vec3i/tov3i.c

OBJ=$(subst /,~,$(SRCS:%.c=%.o))

PROJECTPATH	= $(CURDIR)
BUILDDIR	= build/$(config)
TARGETDIR	= .
INTERN_BD	= $(PROJECTPATH)/$(BUILDDIR)
INTERN_OBJ	= $(OBJ:%=$(INTERN_BD)/%)
INTERN_DEP	= $(INTERN_OBJ:%.o=%.d)
BOBJ_GUARD	= $(shell if [ -d $(INTERN_BD) ]; then printf "on"; else printf "off"; fi)

all: $(TARGETDIR)/$(NAME)

$(INTERN_BD):
	$(SILENT)mkdir -p $(INTERN_BD)

ifeq ($(BOBJ_GUARD),on)

$(INTERN_OBJ):
	@printf "\e[33mCompile $(notdir $@)\e[31m\e[80D"
	$(SILENT)$(CC) -MMD -MP $(CFLAGS) $(INCDIR) -o $@ -c $(subst ~,/,$(@:$(INTERN_BD)/%.o=%.c))
	@printf "\e[80D%-79.79b \e[m[\e[32mok\e[m]\n" "\e[35m$(notdir $@)\e[m compiled !\e(B\e[m"

$(TARGETDIR)/$(NAME): $(INTERN_OBJ)
	$(SILENT)ar -rcs $@ $(INTERN_OBJ)
	@printf "\e[80D%-79.79b \e[m[\e[32mok\e[m]\n" "\e[35m$(NAME)\e[m compiled !\e(B\e[m"

else

$(INTERN_OBJ):

$(TARGETDIR)/$(NAME): $(INTERN_BD) $(INTERN_OBJ)
	$(SILENT)$(MAKE) -s $@ BOBJ_GUARD=on

endif

-include $(INTERN_DEP)

.PHONY: clean fclean re
clean:
	@printf "\e[31mCleaning compile files ...\e(B\e[m\n"
	$(SILENT)rm -rf $(INTERN_OBJ)

fclean: clean
	@printf "\e[31mCleaning $(NAME) ...\e(B\e[m\n"
	$(SILENT)rm -rf $(TARGETDIR)/$(NAME)

re: fclean $(TARGETDIR)/$(NAME)
