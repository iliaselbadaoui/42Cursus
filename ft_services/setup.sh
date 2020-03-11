docker rmi -f nginx phpmyadmin mysql
minikube=/Volumes/Storage/goinfre/ielbadao/homebrew/Cellar/minikube/1.8.1/bin
kubectl=/Volumes/Storage/goinfre/ielbadao/homebrew/Cellar/kubernetes-cli/1.17.3/bin
$kubectl/kubectl delete deployment.apps/nginx
$kubectl/kubectl delete deployment.apps/mysql
$kubectl/kubectl delete deployment.apps/phpmyadmin
$minikube/minikube delete
$minikube/minikube start
docker build -t nginx srcs/nginx/
docker build -t mysql srcs/mysql/
docker build -t phpmyadmin srcs/phpmyadmin/
$kubectl/kubectl create -f srcs/nginx/nginx_pod.yml
$kubectl/kubectl create -f srcs/mysql/mysql_pod.yml
$kubectl/kubectl create -f srcs/phpmyadmin/pma_pod.yml