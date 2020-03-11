docker rmi -f nginx phpmyadmin mysql
minikube delete
docker build -t nginx srcs/nginx/
docker build -t mysql srcs/mysql/
docker build -t phpmyadmin srcs/phpmyadmin/