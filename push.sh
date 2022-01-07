#clone repo
cd /home/ben/Documents/Github/grepet
#git add -A
git add .
git commit -am "$(date +"%r")"
git push
SOMEVAR='benscanlan'
echo "$SOMEVAR"
echo "$(cat /home/ben/Documents/Github/tokenizer)"
