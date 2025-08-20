FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y build-essential \
                       rdma-core \
                       libibverbs-dev \
                       librdmacm-dev \
		       ibverbs-utils \
                       ibverbs-providers \
                       iproute2 \
                       iputils-ping && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY . /app
