echo 1 >> ex02
while :
do
if ln ex02 ex02.lock; then
 echo $(($(tail -n 1 ex02) + 1)) >> ex02
rm ex02.lock
fi
done

