# What is Grepet?

Grepet is a light-weight HTTP server written in C.

## Grepet goal
The goal is to create a social web app server as one compiled binary.
Amazon, google all started this way. It's kind of the best kept secret in the valley.
The big feasibility problem I’ve encountered is updates while running.
May have to use UBUNTU IPTables command into a TCP load balancer in production.

##Structure
The code structure is pretty simple. One file. Add functions. Server() get() post() read() write() etc

## Why should I make it?

It's an easy way to answer questions that your [audience](https://en.wikipedia.org/wiki/Audience) will likely have regarding how to install and use your project and also how to collaborate with you.

## Usage
open terminal and the type following.
```bash
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
curl localhost/?[1-20]
```
open browser navigate to loopback http://127.0.0.1/hello


## Server Technology

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

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate. Just kidding, we are using a compiled language so we don't need a ton of tests.

## Testing
Make sure big changes actually work not just over local loopback. Make a test server at home using any system like laptop with port forward open to 80 on router and open port on system.

routehandler() Needs to be able to get a route and return correct file.

##Notes
Too small insecure to open source right now.
We could even provide precompiled binaries for people to download 🤯
Cake bit is making changes in experimental branch for grepet on GitHub if you want to take a look… Branches the best way to suggest changes. It’s so small, branch and then just paste in the changes is fine.
You can serve a binary for people to run in the browser using wasm. So sky is the limit.

### Copyright
© 2021 grepet.com All Rights Reserved
