#!/bin/bash
set -euo pipefail
util/docker_build.sh handwired/veesplit56:default

target_dir="/mnt/c/Users/kkosc/Documents/Private/klawiatura veesplit56/firmware"
file_name=$(echo *.uf2 | head -1)
modified=$(date --date=@$(stat -c '%Y' ${file_name}) +%Y-%m-%d)
target_file=${file_name%.uf2}-${modified}.uf2
echo COPY "$file_name" '->' "$target_dir/$target_file"
cp "$file_name" "$target_dir/$target_file"
