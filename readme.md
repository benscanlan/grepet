# What is Grepet?

Grepet is a light-weight HTTP server written in C.

# Grepet goal
The goal is to create a social web app and server as one compiled binary.
Amazon, google all started this way. It's kind of the best kept secret in the valley.
The big feasibility problem I’ve encountered is updates while running.
May have to use NGINX or UBUNTU IPTables command as a TCP load balancer in production.

# Structure

The code structure is pretty simple. One file. Add functions. Server() get() post() read() write() etc


# Server Setup

```
sudo apt install nvidia-driver-455
xdg-open /etc/apt/sources.list
sudo apt-get install geekbench5
cd Geekbench-5.4.1-Linux/
./geekbench5
sudo apt install openssh-server
sudo systemctl status ssh
sudo ufw allow ssh
ip a
whoami
sudo systemctl enable --now ssh
ssh ben@10.0.1.6
```
# About remote repositories

You can only push to two types of URL addresses:

An HTTPS URL like https://github.com/user/repo.git

An SSH URL, like git@github.com:user/repo.git

```
mkdir Github
cd Github
git clone https://github.com/benscanlan/grepet 
```
if private:

Username: your_username

Password: your_token
```
cd grepet
git remote add origin  <REMOTE_URL> 
```
MAKE A CHANGE

finder > go > connect to server

sftp://ben@10.0.1.6
```
git commit -am "update git readme how to"
git push
```
Username for 'https://github.com': benscanlan

Password for 'https://benscanlan@github.com': 

You can use the command 'git remote set-url' to change a remote's URL.

HTTPS or SSL: https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories

HTTPS Tokens: https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/creating-a-personal-access-token

Tokens: https://github.com/settings/tokens

Premium FTP client for MacOS
Transmit is a freemium FTP client that's been designed specifically with Mac computers in mind. You can avail of its service for free for seven days but afterward, you will be required to purchase its one-time pay license in order to continue using the platform. Here, you can upload, download and manage all of your files on tons of servers with so much ease.
```

bash
sudo apt install git
sudo apt install vim
git config --global core.editor vim
#git config --global user.name "benscanlan"
#git config --global user.email "bscanlan@mail.csuchico.edu"
git clone https://github.com/benscanlan/grepet
git config --global credential.helper store
git config --global credential.helper cache
#git remote set-url origin benscanlan@github.com:/benscanlan/grepet.git
cd grepet
make
sudo ./server #you cant run below 1024 as normal user. only as root can you run port 80 on ubuntu. bind is failing with no error message in logic. if port 80 run as sudo ./server on ubuntu
sudo lsof -Pi tcp:80 | head -3
sudo tcpdump port 80 #command works just slow to generate traffic data
git commit -a
git push
```
open browser navigate to loopback [http://127.0.0.1/hello](http://127.0.0.1/hello)

# Testing
curl localhost/?[1-20]
while true; do <your_command>; sleep <interval_in_seconds>; done

# undo local changes
git fetch --all
git reset --hard origin/master

# Server Technology

```c
#include <sys/socket.h>
server()    {
    int sockfd = socket(server->ai_family, server->ai_socktype, server->ai_protocol);
    bind(sockfd, server->ai_addr, server->ai_addrlen);
    listen(sockfd, 10);

    while(1) {
        int client_fd = accept(sockfd,(struct sockaddr *) &client_addr, &addr_size);
    }
}
```

# Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate. Just kidding, we are using a compiled language so we don't need a ton of tests.

# Testing
Make sure big changes actually work not just over local loopback. Make a test server at home using any system like laptop with port forward open to 80 on router and open port on system.

routehandler() Needs to be able to get a route and return correct file.

# Notes
In the future we'll probably offer pre-compiled binary in the [releases](https://github.com/benscanlan/grepet/releases) page.
You can serve a binary for people to run in the browser using wasm. So sky is the limit.

# Copyright
©2022 [grepet.com](grepet.com) All Rights Reserved
