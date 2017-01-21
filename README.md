This is the bluetooth driver/module for *BCM2070A0* extracted from Linux kernel with vendor and device, 0x413c & 0x8143 for linux ( Tested with ubuntu 16.04 ). For other vendor and device id, modify device ids in *btusb.c*. 

	make -C /lib/modules/$(uname -r)/build M=$PWD clean
	make -C /lib/modules/$(uname -r)/build M=$PWD
	mv /lib/modules/$(uname -r)/kernel/drivers/bluetooth/btusb.ko /lib/modules/$(uname -r)/kernel/drivers/bluetooth/btusb.ko.bak 
	sudo cp btusb.ko /lib/modules/$(uname -r)/kernel/drivers/bluetooth/
	sudo depmod
	sudo modprobe btusb
