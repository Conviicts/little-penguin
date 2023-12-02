/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 09:07:38 by jode-vri          #+#    #+#             */
/*   Updated: 2023/12/02 09:07:46 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_AUTHOR("jode-vri");
MODULE_DESCRIPTION("Hello world kernel module");
MODULE_VERSION("0.0.1");
MODULE_LICENSE("GPL");

static int __init hello_init(void) {
	pr_info(KERN_INFO "Hello world !\n");
	return (0);
}

static void __exit hello_exit(void) {
	pr_info("Cleaning up module.\n");
}

module_init(hello_init);
module_exit(hello_exit);
