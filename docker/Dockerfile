FROM debian:buster

ADD srcs/install_dep.sh /
ADD srcs/wp.tar.gz /
ADD srcs/pma.tar.gz /
ADD srcs/config.inc.php /
ADD srcs/default /
ADD srcs/sql_install.sh /
ADD srcs/wp-config.php /
ADD srcs/wp.sql /
ADD srcs/nginx.crt /
ADD srcs/nginx.key /
CMD [ "sh","install_dep.sh" ]

EXPOSE 80 3306 443
