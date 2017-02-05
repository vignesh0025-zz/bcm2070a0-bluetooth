This is the bluetooth driver/module for *BCM2070A0* extracted from Linux kernel with vendor and device, 0x413c & 0x8143 for linux ( Tested with ubuntu 16.04 ). For other vendor and device id, modify device ids in *btusb.c*. 

	make -C /lib/modules/$(uname -r)/build M=$PWD clean
	make -C /lib/modules/$(uname -r)/build M=$PWD
	sudo v /lib/modules/$(uname -r)/kernel/drivers/bluetooth/btusb.ko /lib/modules/$(uname -r)/kernel/drivers/bluetooth/btusb.ko.bak 
	sudo cp btusb.ko /lib/modules/$(uname -r)/kernel/drivers/bluetooth/
	sudo depmod
	sudo modprobe btusb

### DKMS Support

DKMS is supported in the module. CD into the cloned directory and perform the following.

    sudo mkdir /usr/src/bcm2070a0-1.0
    sudo cp -r * /usr/src/bcm2070a0-1.0
    sudo dkms add -m bcm2070a0 -v 1.0

Now, module will be automatically installed on new kernel updates.

    sudo dkms build -m bcm2070a0 -v 1.0
    sudo dkms install -m bcm2070a0 -v 1.0

This steps are to verify that the driver is working as expected.

