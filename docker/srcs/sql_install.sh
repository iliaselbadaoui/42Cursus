apt-get install -y expect
apt-get update -y

expect -c "
set timeout 10

spawn mysql -u root

expect \"mysql\"
send \"GRANT ALL PRIVILEGES ON phpmyadmin.* TO 'pma'@'localhost' IDENTIFIED BY 'aitfaska98';\r\"

expect \"mysql\"
send \"CREATE USER 'emperor'@'localhost' IDENTIFIED BY 'aitfaska98';\r\"

expect \"mysql\"
send \"GRANT ALL PRIVILEGES ON *.* TO 'emperor'@'localhost';\r\"

expect \"mysql\"
send \"FLUSH PRIVILEGES;\r\"

expect \"mysql\"
send \"exit\r\"

expect eof
"