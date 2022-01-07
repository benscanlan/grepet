#clone repo
cd /home/ben/Documents/Github/grepet
#git add -A
git add .
git commit -am "$(date +"%r")"
SOMEVAR='benscanlan'
git push
echo "$SOMEVAR"
echo "$(cat /home/ben/Documents/Github/tokenizer)"
