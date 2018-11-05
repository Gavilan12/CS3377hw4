ls
touch script3.sh

cat > script3.sh << EOM
rm file1 
rm link1 
rm -rf dir1
rm -rf dir2
EOM

chmod 744 script3.sh
./script3.sh
rm script3.sh

ls
