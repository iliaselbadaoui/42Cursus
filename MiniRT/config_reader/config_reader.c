/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config_reader.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 14:27:57 by ielbadao          #+#    #+#             */
/*   Updated: 2019/12/11 14:14:55 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config_reader.h"
#include "../types.h"

void	config_processor(char *path)
{
	int configs = open(path, O_RDONLY);
	
}