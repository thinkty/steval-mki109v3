# steval-mki109v3

To use the eval board to test the sensors, there are two ways:
- using Unico GUI
- programming based on the `.ioc` file and flashing it

## Using Unico GUI

Unico GUI is a program running on the host machine to interact with the target board via USB.
For installation, get the file from the Unico page and refer to UM1049 below.
Once the program has started, enter the sensor adapter's device name to connect.

If a problem with the firmware arise, you need to update the firmware on the eval board so that it works with Unico GUI.
Since it's the third version (hence the v3 suffix), look for the binary by the path `<Unico GUI Directory>/FIRMWARE/ProfiMEMSTool board/ProfiMEMSToolV3.<version>.bin`.

To flash the new firmware, you can use [STM32CubeProgrammer](https://www.st.com/en/development-tools/stm32cubeprog.html).
To put the board in DFU mode, press BT3 and BT2 together, release BT3, then release BT2.
For the location of the buttons, refer to figure 3 in UM2116 below.
If you only see a blue LED light up, it's now in DFU mode and it should appear in the CubeProgrammer under USB.
If is shows "No DFU detected", make sure you have the right permissions set for the USB or if the USB is even connected (try `lsusb` and you should see STM Virtual COM Port).
In the CubeProgrammer, open the aforementioned binary file and press download.
Once complete, press BT3 to trigger a reset.
Look at 2.2 Firmware upgrade in UM2116 for more details and options other than the CubeProgrammer.

Once the program has opened and connected to the board, go to the Options tab and press "Easy Configuration" to start the device with default settings.
Press "Start" at the top to start transmitting data from the board to the host.
You can now use the tools on the left side to visualize the data, or go to Load/Save tab to save data to a local file in the host machine.

## Programming based on the `.ioc` file and flashing it

First, the `.ioc` file is located under "_prj_MKI109v3" in the STMems_Standard_C_drivers repository.
Follow the directions to generate the code.
In the "asm3301hhxg1_STdC" directory below, there are examples and a submodule to the driver.
There is a README in the example directory which guides through the examples but it seems to be outdated.
The "asm3301hhxg1-pid" repository contains the platform independent driver code which will be used to access the sensor.

Once the code has been compiled, you can use the CubeProgrammer to update the firmware via USB.
To listen on transmitted data via USB, you can use other programs like PuTTY or Teraterm to listen on the connected port.

## Reference

- [STEVAL-MKI109v3](https://www.st.com/en/evaluation-tools/steval-mki109v3.html#overview) : main product page
- [Unico GUI](https://www.st.com/en/development-tools/unico-gui.html) : Unico GUI page
- [UM1049](https://www.st.com/resource/en/user_manual/um1049-unico-gui-stmicroelectronics.pdf) : Unico GUI user manual
- [UM2116](https://www.st.com/resource/en/user_manual/um2116-stevalmki109v3-professional-mems-tool-motherboard-for-mems-adapter-boards-stmicroelectronics.pdf) : STEVAL-MKI109v3 user manual
- [DS14331](https://www.st.com/resource/en/datasheet/asm330lhhxg1.pdf) : ASM330LHHXG1 data sheet
- [_prj_MKI109v3](https://github.com/STMicroelectronics/STMems_Standard_C_drivers/tree/master/_prj_MKI109V3) : MKI109V3 subdirectory containing sample `.ioc`.
- [asm3301hhxg1_STdC](https://github.com/STMicroelectronics/STMems_Standard_C_drivers/tree/master/asm330lhhxg1_STdC) : asm3301hhxg1 subdirectory containing examples and driver
- [asm330lhhxg1-pid](https://github.com/STMicroelectronics/asm330lhhxg1-pid/tree/master) : asm3301hhxg1 platform independent driver
