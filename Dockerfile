FROM gcc:latest
RUN mkdir /etc/compile_bash
COPY ./compile_bash/compile.sh /etc/compile_bash
RUN chmod +x /etc/compile_bash/compile.sh
WORKDIR /etc/compile_bash