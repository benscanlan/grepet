#vnc
#https://websiteforstudents.com/access-ubuntu-18-04-lts-beta-desktop-via-vnc-from-windows-machines/
sudo apt install vino
vin-preferences
sudo apt-get install dconf-editor
#ssh
#https://linuxize.com/post/how-to-enable-ssh-on-ubuntu-20-04/
sudo apt update
sudo apt install openssh-server -y #yes
sudo systemctl status ssh
sudo ufw allow ssh
ip a #ssh username@ip_address ben@macmini.local
#pip
#https://linuxize.com/post/how-to-install-pip-on-ubuntu-20.04/
sudo apt install python3-pip
pip3 -V

#swift Ubuntu 20.04
#https://swift.org/getting-started/#installing-swift
sudo apt-get install \
binutils \
git \
gnupg2 \
libc6-dev \
libcurl4 \
libedit2 \
libgcc-9-dev \
libpython2.7 \
libsqlite3-0 \
libstdc++-9-dev \
libxml2 \
libz3-dev \
pkg-config \
tzdata \
zlib1g-dev -y
#exctract swift file from
#https://swift.org/download/#releases
#bs4
pip3 install beautifulsoup4
