#!/bin/bash
if check=$(gcc -o /usr/src/app/app /usr/src/app/main.c); then
    cd /usr/src/app
    ./app
else
    echo $check
fi