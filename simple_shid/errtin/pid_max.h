#!/bin/bash

if [ "$(getconf LONG_BIT)" -eq 64 ]; then
    # 64-bit system
    echo "Maximum PID: $((2**32 - 1))"
elif [ "$(getconf LONG_BIT)" -eq 32 ]; then
    # 32-bit system
    echo "Maximum PID: $((2**16 - 1))"
else
    # Unknown system
    echo "Unable to determine maximum PID."
fi
]
