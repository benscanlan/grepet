hashme='5450db8d0fb1cc281ae165bde641cf23';
for i in {1..5000}
do
#echo "hello";
hashme=$(echo $hashme | md5)
echo $hashme "-> ";
done
