This is all about building it on Ubuntu 16.04.6 LTS.

kernel headers - 4.15.0-47-generic

The build process is simple - 

 mkdir build
 cd build
 cmake ../wireshark-3.0.1
 make 
 sudo make install

This sandbox supports a custom plugin called foo.
In order to build this, I have modified the plugin folder.
The idea is taken from the plugin/epan/gryphon.
The foo is a kind of replication of gryphon.

Afterwards, I have changed the top CMakeFile to include plugins/epan/foo around line number 16.

I have

mv CMakeListsCustom.txt.example CMakeListsCustom.txt

vim  CMakeLists.txt
#make
#sudo make install
#sudo ./run/wireshark

