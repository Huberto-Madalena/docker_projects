#  official httpd image as a base
FROM httpd:latest

#install  iputils-ping for upcoming images
RUN apt-get update && apt-get install -y iputils-ping


