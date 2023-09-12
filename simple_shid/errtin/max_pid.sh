#!/bin/bash

# Check if the /proc/sys/kernel/pid_max file exists
if [ -f /proc/sys/kernel/pid_max ]; then
    # Read the maximum PID value from the file and print it
    max_pid=$(cat /proc/sys/kernel/pid_max)
    echo "Maximum PID value: $max_pid"
else
    echo "Error: /proc/sys/kernel/pid_max file not found."
fi

