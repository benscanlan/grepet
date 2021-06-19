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
sudo apt-get update
sudo apt-get upgrade
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
pip3 install pyspellchecker
#https://machinelearningmastery.com/introduction-python-deep-learning-library-tensorflow/
#https://blog.tensorflow.org/2019/05/transformer-chatbot-tutorial-with-tensorflow-2.html
# Indian @ 3:34
#https://www.youtube.com/watch?v=SJDEOWLHYVo
pip3 install tensorflow
#https://cloud.google.com/dialogflow/docs/reference/libraries/python
pip3 install dialogflow
sudo pip3 install virtualenv
#python2
sudo apt install python2.7
sudo apt install python2.7-pip
pip2.7 -V
pip3 install tensorflow
#https://blog.codeinside.eu/2018/12/04/howto-use-tensorflow-with-amd-gpus/
#https://stackoverflow.com/questions/48720833/could-not-find-a-version-that-satisfies-the-requirement-tensorflow
#pip3 install https://storage.googleapis.com/tensorflow/mac/cpu/tensorflow-1.8.0-py3-none-any.whl
pip3 install keras
#https://pypi.org/project/ai-benchmark/
Sudo pip3 install ai-benchmark
Sudo pip3 install TensorFlow
#from ai_benchmark import AIBenchmark
#benchmark = AIBenchmark()
#results = benchmark.run()
