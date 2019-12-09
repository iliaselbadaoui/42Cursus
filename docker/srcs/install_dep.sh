apt-get update -y
apt-get install -y wget
apt-get install -y apt-utils
apt-get update -y
apt-get install -y mariadb-server
apt-get install -y php-mysql
apt-get install -y nginx
mv default /etc/nginx/sites-enabled
mv pma /var/www/html
mv wp /var/www/html
mv nginx.crt nginx.key /etc/ssl/
mv config.inc.php /var/www/html/pma
mv wp-config.php /var/www/html/wp
apt-get install -y vim
apt-get install -y php-fpm
apt-get install -y php7.3-mbstring
# starting services
service mysql start
echo "HERE WE GO"
mysql -u root < /var/www/html/pma/sql/create_tables.sql
mysql -u root < /wp.sql
bash sql_install.sh
echo "HERE WE ARRIVE"
service mysql restart
service php7.3-fpm start
service nginx start
cat