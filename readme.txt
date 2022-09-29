La idea es crear un contenedor con el compilador de gcc para el lenguaje de programacion C
El contenedor tiene un volumen con la carpeta source, donde se devuelve el binario de C y se almacena el .main
Para poder ejecutar el compilador dentro del contenedor se utiliza un peque;o script en bash

#crea una imagen de docker desde el Dockerfile con el nombre de gcc
docker build -t gcc .

#crea el contenedor apartir de la imagen de gcc con el nombre de gcc-env y crea el volumen
docker run -itd --name gcc-env -v C:\Users\PC\Desktop\gcc_docker\source:/usr/src/app gcc
docker run -itd --name gcc-env -v /root/gcc_docker/source:/usr/src/app gcc

#ejecuta el script de bash para compilar main y ejecutar el binario
docker exec -it gcc-env bash compile.sh

#comando para volver a ejecutar el bianrio actual
docker exec -it gcc-env /usr/src/app/app

