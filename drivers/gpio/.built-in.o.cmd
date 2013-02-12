cmd_drivers/gpio/built-in.o :=  arm-eabi-ld -EL    -r -o drivers/gpio/built-in.o drivers/gpio/gpiolib.o drivers/gpio/sx150x.o drivers/gpio/pm8xxx-gpio.o drivers/gpio/pm8xxx-mpp.o 
