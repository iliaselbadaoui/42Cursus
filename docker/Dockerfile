# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/29 22:59:07 by ielbadao          #+#    #+#              #
#    Updated: 2019/12/01 00:34:25 by ielbadao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:buster

RUN apt-get update -yq
RUN apt-get install -y wget
RUN apt-get install -y software-properties-common
RUN apt-get install -y tar
RUN apt-get install -y apt-utils
RUN apt-get install -y nginx
RUN ma# service nginx restart
RUN apt-get install -y mariadb-server php-mysql
RUN apt-get install -y vim
RUN apt-get install -y php-fpm
RUN apt-get install php7.3-mbstring
ADD src/start_all.sh /
ADD src/wp.tar.gz /var/www/
ADD src/pma.tar.gz /var/www/
ADD src/config.inc.php /var/www/pma
RUN chmod -R a+x /start_all.sh

EXPOSE 80
