# ruuvi.firmware.c
Ruuvi Firmware version 3. Built on top of Nordic SDK 15, uses both Ruuvi and external repositories as submodules.
Under development, please follow [Ruuvi Blog](https://blog.ruuvi.com) for details. 

# Setting up
## SDK 15.0
Download [Nordic SDK15](https://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v15.x.x/) and install it one level above the project root. 

## Submodules
Run `git submodule update --init --recursive`. This will search for and install the other git repositories referenced by this project.

## Toolchain
ARMGCC is currently no supported, but you can follow this [Ruuvi blog post](https://blog.ruuvi.com/ruuvitag-dev-environment-e4b16e2d59e9) and setup the makefile.
Pull requests for updated makefiles are gratefully accepted. 

Segger Embedded Studio can be set up by following this [RuuviLab Tool post](https://lab.ruuvi.com/ses/).

# Usage
Compile and flash the project to your board using SES. Instructions on how to use a bootloader will be added later on.
The project is not yet in a useful state for any practical purpose other than learning. 

# How to contribute
Please let us know your thoughts on the direction and structure of the project. Does the project help you to understand how to build code on RuuviTag?
Is the structure of the project sensible to you? Pull requests and GitHub issues are welcome, but new features will not be accepted at this time. 

# Licensing
BSD-3
