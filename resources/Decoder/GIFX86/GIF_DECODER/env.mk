export NO_DISPLAY = NO
SHELL := /bin/bash

# This was learnt in the shell scripting 
# do man tail
# do man head
# c option is for the characters
NPROCS := $(shell cat /proc/cpuinfo | grep -i  'cpu cores' | tail -c2)
