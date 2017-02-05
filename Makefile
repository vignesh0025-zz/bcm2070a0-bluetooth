#
# Makefile for the Linux Bluetooth HCI device drivers.
#

obj-$(CONFIG_BT_HCIBTUSB)	+= btusb.o
obj-$(CONFIG_BT_BCM)		+= btbcm.o
obj-$(CONFIG_BT_RTL)		+= btrtl.o

ccflags-y += -D__CHECK_ENDIAN__

all:
	make -C /lib/modules/`uname -r`/build M=`pwd` clean
	make -C /lib/modules/`uname -r`/build M=`pwd`
	
install:
	echo "Run make install with sudo"
	sudo cp -u BCM20702A1-413c-8143.hcd /lib/firmware/brcm/
	sudo mv /lib/modules/`uname -r`/kernel/drivers/bluetooth/btusb.ko /lib/modules/`uname -r`/kernel/drivers/bluetooth/btusb.ko.bak 
	sudo cp btusb.ko /lib/modules/`uname -r`/kernel/drivers/bluetooth/
	sudo depmod
	sudo modprobe btusb

clean:
	rm -rf *.o
	rm -rf *.ko

