FROM alpine:latest
RUN apk update
RUN apk add nginx
RUN mkdir /run/nginx/
ADD default.conf /etc/nginx/conf.d/
ADD index.html /var/www/localhost/htdocs
ADD nginx.conf /etc/nginx/nginx.conf
ADD phpinfo.php /var/www/localhost/htdocs
ADD run.sh /
RUN apk add vim
CMD [ "sh" , "run.sh"]
EXPOSE 80 443
