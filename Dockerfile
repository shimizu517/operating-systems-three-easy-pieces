FROM ubuntu:latest
RUN apt update -y
RUN apt install -y gcc make gdb
WORKDIR /app
