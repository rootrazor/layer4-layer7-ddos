

# --- renkler ---
kirmizi="\033[1;31m"
yesil="\033[1;32m"
mavi="\033[1;34m"
renkyok="\033[0m"

# --- tanitim ---



echo -e "     .--. " | lolcat -a -d 2
echo -e "    |o_o |	 " | lolcat -a -d 2
echo -e "    |:_/ |   ========= DDoS Sistemi v1.0 ========= " | lolcat -a -d 2
echo -e "  //   \ \  ====== Code by RootRazor ====== " | lolcat -a -d 2
echo -e " (|     | ) ====== Thanks to Turkharekat ======= " | lolcat -a -d 2
echo -e " /\'\_   _/ " | lolcat -a -d 2
echo -e " \___)=(___/ " | lolcat -a -d 2

 
# --- verilerim ---
verilerim() { 
	echo -e "\n- bu script rootrazor tarafindan kodlamistir C ve BASH olarak."  | lolcat -a -d 10
	echo -e "\n- razorscript.c bunu indiriniz"  | lolcat -a -d 10
	echo -e "\n- yukardaki scripti derlemeden kullanamazsiniz."  | lolcat -a -d 10
	echo -e "\n- Birden Fazla Method ve Katmanlarimiz Sayesinde Atak Cikarabilirsiniz ."  | lolcat -a -d 10
	echo -e "\nOrnek Kullanim:\n - ./rootrazor İP PORT tcp, udp, amp, syn, ack" | lolcat -a -d 2
	} 


if [ $# -lt 4 ] 
then
	verilerim
	exit 1
fi 
