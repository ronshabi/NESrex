#!/bin/sh

# You can do this manually, this is just for convenience

BUILD_DIR="build"

if [ ! -d "${BUILD_DIR}" ]; then
  mkdir ${BUILD_DIR}
  cd ${BUILD_DIR} || exit
  cmake -B. -S../ -GNinja
  ninja
else
  # build dir exists
  echo "This script will not remove your build directory, assuming it is important."
  echo "Delete it yourself, then run this script."
fi