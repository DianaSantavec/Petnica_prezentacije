set -e
sudo apt-get -y update && apt-get -y install grep vim manpages wget
sudo groupadd unix_workshop
sudo newusers users.txt