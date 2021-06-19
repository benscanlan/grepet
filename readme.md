# What is it?

A README is a text file that introduces and explains a project. It contains information that is commonly required to understand what the project is about.

## Why should I make it?

It's an easy way to answer questions that your [audience](https://en.wikipedia.org/wiki/Audience) will likely have regarding how to install and use your project and also how to collaborate with you.

## Usage
open terminal and the type following.
```bash
cd grepet
make
./server
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
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate. Just kidding, we are using a compiled language so we don't need a ton of tests.

## NEED TO DO'S
server() Make sure this actually works not just over local loopback. Make a test server at home using any system like laptop with port forward open to 80 on router and open port on system.

routehandler() Needs to be able to get a route and return correct file.

### Copyright
© 2021 grepet.com All Rights Reserved
