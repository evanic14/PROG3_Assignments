#!/bin/bash

# Install script for Ubuntu 16.04 LTS, 18.04 LTS or 20.04 LTS

version="0.7"

if [[ $EUID -ne 0 ]]; then
   echo "This install script v${version} must be run as root" 1>&2
   exit 1
fi

apt-get update

# Tools
apt-get install htop tmux nmap cmake -y
apt-get install git valgrind gigolo meld -y
apt-get install emacs tmuxinator tree mutt -y
apt-get install doxygen doxygen-gui graphviz default-jre -y
apt-get install wireshark -y
apt-get install gnuplot -y
apt install clang-format -y

# SSH support
apt-get install openssh-server -y
/etc/init.d/ssh restart

# Libs for MQTT
apt-get install libssl-dev -y
apt-get install libc-ares-dev -y
apt-get install uuid-dev -y
apt-get install libwebsockets-dev -y

# Libs for C++
apt-get install libboost-all-dev
apt-get install libpoco-dev

sudo ldconfig
