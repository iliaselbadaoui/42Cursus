rc-status
touch /run/openrc/softlevel
rc-service mariadb start
tail -f /dev/null