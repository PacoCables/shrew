ShRew for Ubuntu 20.04+ or Debian9+
===================================

ABOUT
-----

This patched version of ShRew contains the sources from ShRew Soft Inc modified to be executed on Linux platform with QT5 and OpenSSL 1.x.

It's addressed to users of UbuntU 20.04+ or Debian9+, but You can try to install it on other Linux distriburion changing apt software manager for the corresponding to the distribution you choose.


REQUIREMENTS
------------

Minimum:

* Computer running Debian 9, Ubuntu 20.04 or one of its derivativers
* build-essentials (c++ compiler, stock c libs & includes, pthread support)
* flex
* libedit2
* bison >= 2.3
* cmake >= 2.4
* opsenssl >= 1.1.x
* QT5 (qt5-default)


INSTALLATION
------------

Open a shell and clone this repo.

Go to ike folder

Execute the "install-shrew.sh" bash script. This script consist of 3 steps:

1. Install requeriments (apt)
2. Compile sources and link (cmake and make)
3. Install and initialize environment (make install an copy accesory files)

Steps one and three need elevated privilegies and I'm using sudo to achieve them. Thereby the user used to execute the script must be in the sudoers group.

After each step the user is prompted to continue or not. Please, review the output carefully and verify that errors wirt severity greather tah warning don't appears.

**VERY IMPORTANT**: 
Read teh README.txt file before start. It containts the original README from ShRew Soft Inc.


