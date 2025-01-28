#!/bin/bash
export ARCH=arm64
export RDIR="$(pwd)"
export KBUILD_BUILD_USER="$(whoami)"

#export toolchain paths
export BUILD_CROSS_COMPILE="${RDIR}/toolchains/arm-gnu-toolchain-14.2.rel1-x86_64-aarch64-none-linux-gnu/bin/aarch64-none-linux-gnu-"
export BUILD_CC="${RDIR}/toolchains/clang-r383902/bin/clang"

#output dir
if [ ! -d "${RDIR}/out" ]; then
    mkdir -p "${RDIR}/out"
fi

#build dir
if [ ! -d "${RDIR}/build" ]; then
    mkdir -p "${RDIR}/build"
else
    rm -rf "${RDIR}/build" && mkdir -p "${RDIR}/build"
fi

#build options
export ARGS="
-C $(pwd) \
O=$(pwd)/out \
-j$(nproc) \
ARCH=arm64 \
CROSS_COMPILE=${BUILD_CROSS_COMPILE} \
CC=${BUILD_CC} \
"

#build kernel image
build_kernel(){
    make ${ARGS} clean && make ${ARGS} mrproper
    make ${ARGS} defconfig custom.config
    make ${ARGS} menuconfig
    make ${ARGS} Image || exit 1
    cp out/arch/arm64/boot/Image.gz $(pwd)/arch/arm64/boot/Image.gz
}

build_kernel
