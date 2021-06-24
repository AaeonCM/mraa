UP Xtreme  Board   {#up_xtreme_i11}
================================
UP Xtreme i11 is based on the Intel&reg; Core&trade; i3/i5/i7 Tiger Lake SoCs.

For the full specification please refer to the main specification page here:

https://up-board.org/wp-content/uploads/up-xtreme-i11/Datasheet-UP-xtreme.pdf

Interface notes
-----------------------
The UP Xtreme i11 present one Raspberry Pi compatible HAT connector and a  100 pin exHAT connector. Currently this implementation only support the interfaces through the HAT connector.

**I2C**
 - 2 channels
 - Support: standard-mode (100kHz), fast-mode (400kHz), Fast-mode plus (1MHz), High-speed mode (3.4MHz)
 - Bus frequency can be selected in BIOS settings
 - The default i2c channel is the one connected to the pin 3,5 of the hat
 - On some OSes the i2c-dev kernel module may need to be loaded manually to export the i2c device nodes

**SPI**
 - Bus frequencies up to 10MHz are supported
 - 2 chip-selects
 - To enable SPI device nodes the ACPI tables need to be overwritten as explained [here](https://wiki.up-community.org/Pinout_UP2#SPI_Ports)

**UART**
 - 1 high-speed UART is available
 - Supporting baud rates up to 3686400 baud
 - Hardware flow-control signals are available on pins 11/36 (RTS/CTS)

Please note that a kernel with UP board support is required to enable the I/O
interfaces above.

Refer to http://www.up-community.org for more information.

Pin Mapping
--------------------
The GPIO numbering in the following pin mapping is based on the Raspberry Pi
model 2 and B+ numbering scheme.

NOTE: the i2c device numbering depend on various factor and cannot be trusted:
the right way of determining i2c (and other devices) numbering is through PCI
physical device names. See the source code in src/x86/up_xtreme_i11.c for details.

| MRAA no. | Function     | Rpi GPIO   | Sysfs GPIO | mraa device     |
|----------|--------------|------------|------------|-----------------|
| 1        | 3V3 VCC      |            |            |                 |
| 2        | 5V VCC       |            |            |                 |
| 3        | I2C_SDA      | 2          | 288        | I2C0            |
| 4        | 5V VCC       |            |            |                 |
| 5        | I2C_SCL      | 3          | 289        | I2C0            |
| 6        | GND          |            |            |                 |
| 7        | GPIO(4)      | 4          | 315        |                 |
| 8        | UART_TX      | 14         | 417        | UART0           |
| 9        | GND          |            |            |                 |
| 10       | UART_RX      | 15         | 416        | UART0           |
| 11       | UART_RTS     | 17         | 418        | UART0           |
| 12       | I2S_CLK      | 18         | 223        |                 |
| 13       | GPIO(27)     | 27         | 474        |                 |
| 14       | GND          |            |            |                 |
| 15       | GPIO(22)     | 22         | 483        |                 |
| 16       | GPIO(23)     | 23         | 482        |                 |
| 17       | 3V3 VCC      |            |            |                 |
| 18       | GPIO(24)     | 24         | 485        |                 |
| 19       | SPI0_MOSI    | 10         | 174        | SPI1            |
| 20       | GND          |            |            |                 |
| 21       | SPI0_MISO    | 9          | 173        | SPI1            |
| 22       | GPIO(25)     | 25         | 484        |                 |
| 23       | SPI0_SCL     | 11         | 172        | SPI1            |
| 24       | SPI0_CS0     | 8          | 171        | SPI1            |
| 25       | GND          |            |            |                 |
| 26       | SPI0_CS1     | 7          | 175        | SPI1            |
| 27       | ID_SD        | 0          | 286        | I2C1            |
| 28       | ID_SC        | 1          | 287        | I2C1            |
| 29       | GPIO(5)      | 5          | 330        |                 |
| 30       | GND          |            |            |                 |
| 31       | GPIO(6)      | 6          | 487        |                 |
| 32       | GPIO(12)     | 12         | 312        |                 |
| 33       | GPIO(13)     | 13         | 313        |                 |
| 34       | GND          |            |            |                 |
| 35       | I2S_FRM      | 19         | 224        |                 |
| 36       | UART_CTS     | 16         | 419        | UART0           |
| 37       | GPIO(26)     | 26         | 473        |                 |
| 38       | I2S_DIN      | 20         | 226        |                 |
| 39       | GND          |            |            |                 |
| 40       | I2S_DOUT     | 21         | 225        |                 |
