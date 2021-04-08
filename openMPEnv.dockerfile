FROM debian:bullseye-slim
RUN apt-get update -y
RUN apt-get install gcc make libc-dev -y