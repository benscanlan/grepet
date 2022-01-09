expect "Username for 'https://github.com':"
send "$passphrase\r";
expect "Password for 'https://benscanlan@github.com':"
send "$(cat /home/ben/Documents/Github/tokenizer)\r";
