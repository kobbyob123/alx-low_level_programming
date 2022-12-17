#!/bin/bash
wget -P /tmp https://github.com/kobbyob123/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gigawin.so
export LD_PRELOAD=/tmp/gigawin.so
