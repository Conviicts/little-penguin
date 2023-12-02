# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 09:07:17 by jode-vri          #+#    #+#              #
#    Updated: 2023/12/02 09:07:32 by jode-vri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

obj-m += main.o

all: modules

modules:
	make -C /lib/modules/$(shell uname -r)/build M=$(CURDIR) modules

modules_install:
	make -C /lib/modules/$(shell uname -r)/build M=$(CURDIR) modules_install

check:
	insmod main.ko
	dmesg -T | tail -1
	rmmod main.ko
	dmesg -T | tail -1

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(CURDIR) clean

.PHONY: all modules modules_install check clean
