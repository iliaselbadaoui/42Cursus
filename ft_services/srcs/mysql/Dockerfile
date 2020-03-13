FROM alpine:latest

RUN apk add mysql
RUN mysql_install_db --user=mysql --datadir=/var/lib/mysql
RUN apk add openrc
ADD wp.sql /
ADD run.sh /
CMD [ "sh", "run.sh" ]
EXPOSE 3306