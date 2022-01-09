#clone repo
cd /home/ben/Documents/Github/grepet
#git add -A
git add .
git commit -am "$(date +"%r")"
passphrase='benscanlan'
git push
#expect "Username for 'https://github.com':"
send "$passphrase\r";
#expect "Password for 'https://benscanlan@github.com':"
send "$(cat /home/ben/Documents/Github/tokenizer)\r";
