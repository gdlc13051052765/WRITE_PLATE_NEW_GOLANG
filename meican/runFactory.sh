kill -9 $(pidof golang)
kill -9 $(pidof WriteDisk)

sleep 1
/home/meican/facutoryGolang &
/home/meican/mct_v1_1_test &
