#!/bin/bash

# Define the output file
output_file="combined1.txt"

# Loop through all .txt files in the current directory
for file in *.c
do
    # Extract the file name (without extension)
    file_name=$(basename -s .c "$file")

    # Append the file name to the output file
    echo "Contents from $file_name:" >> "$output_file"

    # Copy the contents of the file into the output file
    cat "$file" >> "$output_file"

    # Add a separator
    echo -e "\n\n" >> "$output_file"
done

