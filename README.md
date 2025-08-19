# docker_projects
directory for general docker projects and files

This project illustrates the creation of two containers that can ping each other for simple networking purposes. they are created with a custom network bridge with subnet mask: 172.18.0.0/29.
It's important that the containers be created with static ips since docker tends to assign the same ips to newly created containers, which makes it impossible for them ping each other
the command to create a container with a static ip is:

docker run -d --name Your_Container_name_here network Your_custom_bridge_here --ip 172.18.0.3

make sure the other container has the ip 172.18.0.2 assigned to it.

if you need to install ping utilities, enter teh container with 

docker exec -it -container_nname /bin/bash

apt update
apt install -y iputils-ping
