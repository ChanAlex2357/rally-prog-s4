#!/bin/bash
echo "----------------------------- COMPILE ------------------------"
APP=rally_app
make clean
make
echo "------------------------------ RUN -----------------------"
./$APP