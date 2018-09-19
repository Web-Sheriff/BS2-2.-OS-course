echo 1 > ex2
while :
do
echo $(($(tail -n 1 ex2) +1))>>ex2
done
